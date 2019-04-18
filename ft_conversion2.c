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

void	convert_int(t_type var, t_conv *type)
{
	char	*str;
	char	*tmp;
	char	*tmp1;
	int	len;

	len = ft_nb_len(ft_abs(var.nbr), 10);
	len += (var.nbr < 0) ? 1 : 0;
	str = ft_itoa(var.nbr);
	tmp = NULL;
	if (type->precision > len)
		tmp = ft_str_putchar('0', type->precision - len);
	if (var.nbr < 0)
		var.sign = '-';
	else
		var.sign = (type->p) ? '+' : '0';
	if (tmp)
	{
		tmp1 = str;
		if (var.nbr < 0)
			str = ft_strjoin(tmp, str + 1);
		else
			str = ft_strjoin(tmp, str);
		printf("str = %s\n", str);
		free(tmp);
		free(tmp1);
	}
	else
		var.sign = (var.nbr < 0) ? '0' : var.sign;
	tmp1 = str;
	tmp = ft_str_putchar(var.sign, 1);
	str = (var.sign != '0') ? ft_strjoin(tmp, str) : str;
	ft_putstr(str);
	free(tmp);
	free(tmp1);
//	free(str); //aborting but why????????
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
