/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:03:16 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/22 12:04:09 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_padding_no_pre(t_type *var, t_conv *type, char *str)
{
	char	*strp;
	int		add;

	var->len += (type->p || var->nbr < 0) ? 1 : 0;
	if (type->padding > var->len)
	{
		add = (type->precision == -1 && type->z != 0 &&
		type->m == 0) ? 48 : 32;
		type->padding -= (type->s) ? var->len + 1 : var->len;
		strp = ft_str_putchar(add, type->padding);
		if (var->sign && type->m == 0)
			strp = (add == 48) ? ft_strjoin(var->sign, strp) :
			ft_strcat(strp, var->sign); // free inside strcat and strjoin here
		else if (var->sign && type->m)
			str = ft_strjoin(var->sign, str);
		(type->s) ? ft_putchar(' ') : 0;
		ft_putrev_str(str, strp, type);
	}
	else
	{
		str = (var->sign) ? ft_strjoin(var->sign, str) : str;
		(type->s) ? ft_putchar(' ') : 0;
		ft_putstr(str);
	}
}
void	ft_padding_pre(t_type *var, t_conv *type, char *str)
{
	char	*strp;

	type->precision += (type->p || var->nbr < 0) ? 1 : 0;
	if (type->padding > type->precision)
	{
		type->padding -= (type->s) ? type->precision + 1 : type->precision;
		strp = ft_str_putchar(' ', type->padding);
		str = (type->p || var->nbr < 0) ? ft_strjoin(var->sign, str)
		: str;
		(type->s) ? ft_putchar(' ') : 0;
		ft_putrev_str(str, strp, type);
	}
	else
	{
		str = (var->sign) ? ft_strjoin(var->sign, str) : str;
		(type->s) ? ft_putchar(' ') : 0;
		ft_putstr(str);
	}
}
char	*ft_check_sign(t_type *var, t_conv *type)
{
	char	*sign;

	if (var->nbr < 0)
	{
		sign = ft_str_putchar('-', 1);
		type->s = 0;
	}
	else
		sign = (type->p) ? ft_str_putchar('+', 1) : NULL;
	type->s = (type->p) ? 0 : type->s;
	return (sign);
}

void	convert_int(t_type *var, t_conv *type)
{
	char	*str;
	char	*tmp;

	var->sign = ft_check_sign(var, type);
	var->len = ft_nb_len(ft_abs(var->nbr), 10);
	str = ft_itoa(ft_abs(var->nbr));
	if (type->precision > var->len)
	{
		tmp = ft_str_putchar('0', (type->precision - var->len));
		str = ft_strjoin(tmp, str);
		ft_padding_pre(var, type, str);
	}
	else
		ft_padding_no_pre(var, type, str);
}

void	ft_fetch_arg_next(t_conv *type, va_list arg)
{
	t_type	var;

	if (type->c == 'd')
	{
		var.nbr = va_arg(arg, int);
		convert_int(&var, type);
	}
}
