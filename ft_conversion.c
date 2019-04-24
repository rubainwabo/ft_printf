/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 09:11:40 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/18 13:46:49 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	convert_char(unsigned char c, t_conv *type)
{
	char	*str;
	char	add;

	if (type->padding)
	{
		add = (type->z != 0 && type->m == 0) ? '0' : ' ';
		type->padding--;
		str = ft_str_putchar(add, type->padding);
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

	tmp = ft_utoa_base(ptr, 16, 0, ft_nb_len(ptr, 16));
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

void	ft_fetch_arg(t_conv *type, va_list arg)
{
	unsigned int		val;
	char				*str;
	unsigned long long	ptr;

	if (type->c == 'c')
	{
		val = va_arg(arg, unsigned int);
		convert_char((unsigned char)val, type);
	}
	else if (type->c == 's')
	{
		str = va_arg(arg, char*);
		convert_string(str, type);
	}
	else if (type->c == 'p')
	{
		ptr = va_arg(arg, unsigned long long);
		convert_pointer(ptr, type);
	}
	else
		ft_fetch_arg_next(type, arg);
}
