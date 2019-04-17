/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 09:11:40 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/16 13:59:11 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	convert_char(unsigned char c, t_conv *type)
{
	char	str[type->padding];
	char	add;

	str[type->padding - 1] = '\0';
	if (type->padding)
	{
		add = (type->z != 0 && type->m == 0) ? '0' : ' ';
		type->padding--;
		while (--type->padding >= 0)
			str[type->padding] = add;
		ft_putrev_char(c, str, type);
	}
	else
		ft_putchar(c);
}

void	convert_string(char *s, t_conv *type)
{
	char	*str;
	char	*strp;
	int		len;
	char	add;

	len = ft_strlen_err(s);
	if (type->precision >= 0)
		str = ft_strccpy(s, type->precision);
	else
		str = ft_strccpy(s, len);
	len = (type->precision >= 0 &&
			type->precision <= len) ? type->precision : len;
	if (type->padding > len)
	{
		add = (type->z != 0 && type->m == 0) ? '0' : ' ';
		type->padding -= len;
		strp = ft_str_putchar(add, type->padding);
		ft_putrev_str(str, strp, type);
	}
	else
		ft_putstr(str);
}

void	convert_pointer(unsigned long long ptr, t_conv *type)
{
	char 	*str;
	char 	*strp;
	char 	add;
	int		len;
	char 	*tmp;

	tmp = ft_utoa_base(ptr, 16, 0);
	str = ft_strjoin("0x", tmp);
	len = ft_strlen_err(str);
	ft_strdel(&tmp);
	if (type->padding > len)
	{
		add = ' ';
		type->padding -= len;
		strp = ft_str_putchar(add, type->padding);
		ft_putrev_str(str, strp, type);
	}
	else
		ft_putstr(str);
}

void	convert_int(t_type var, t_conv *type)
{
	char	*str;
	char	*tmp;
	char	*tmp1;
	int	len;

	len = ft_nb_len(var.nbr, 10);
	str = ft_itoa(var.nbr);
	if (type->precision > -1 && type->precision > len)
	{
		tmp = ft_str_putchar('0', type->precision - len);
		tmp1 = str;
		if (var.nbr < 0)
			var.sign = '-';
		else
			var.sign = (type->p) ? '+' : '0';
		str = (var.sign != '0') ? ft_strjoin(tmp, str + 1) : ft_strjoin(tmp, str);
		free(tmp);
		free(tmp1);
		tmp = ft_str_putchar(var.sign, 1);
		ft_strcat(tmp, str);
		free(tmp);
	}
	ft_putstr(str);
	free(str);
}
	

void	ft_fecth_arg2(t_conv *type, va_list arg, t_type var)
{
	if (type->c == 'd')
	{
		var.nbr = va_arg(arg, int);
		convert_int(var, type);
	}
}

void	ft_fetch_arg(t_conv *type, va_list arg)
{
	t_type	var;

	if (type->c == 'c')
	{
		var.val = va_arg(arg, unsigned int);
		convert_char((unsigned char)var.val, type);
	}
	else if (type->c == 's')
	{
		var.str = va_arg(arg, char*);
		convert_string(var.str, type);
	}
	else if (type->c == 'p')
	{
		var.ptr = va_arg(arg, unsigned long long);
		convert_pointer(var.ptr, type);
	}
	else
		ft_fetch_arg_next(type, arg, var);
}
