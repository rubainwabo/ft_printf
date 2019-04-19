/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:03:16 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/18 15:21:29 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_padding(t_conv *type, char *str)
{
	char	*strp;
	char	add;
	int	len;

	len = ft_strlen_err(str);
	if (type->padding > type->precision && type->padding > len)
	{
		if (type->precision == -1)
		{
			type->padding -= len;
			add = (type->z != 0 && type->m == 0) ?
			'0' : ' ';
		}
		else
		{
			add = ' ';
			type->padding -= (type->precision < len) ? len :
			type->precision;
		}
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

	len = ft_nb_len(ft_abs(var.nbr), 10);
	str = ft_itoa(var.nbr);
	if (var.nbr < 0)
		var.sign = '-';
	else
		var.sign = (type->p) ? '+' : '0';
	if (type->precision > len)
	{
		tmp1 = str;
		tmp = ft_str_putchar('0', (type->precision - len));
		str = (var.nbr < 0) ? ft_strjoin(tmp, str + 1) :
		ft_strjoin(tmp, str);
		ft_free(tmp1, tmp);
	}
	else
		var.sign = (var.nbr < 0) ? '0' : var.sign;
	tmp = (var.sign != '0') ? ft_str_putchar(var.sign, 1) : ft_strnew(1);
	str = (var.sign != '0') ? ft_strjoin(tmp, str) : str;
	free(tmp);
	ft_padding(type, str);
}
	

void	ft_fetch_arg_next(t_conv *type, va_list arg)
{
	t_type	var;

	if (type->c == 'd')
	{
		var.nbr = va_arg(arg, int);
		convert_int(var, type);
	}
}
