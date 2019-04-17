/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:03:16 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/17 17:03:30 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	convertint(t_type var, t_conv *type)
{
	char	*str;
	char	*tmp;
	char	*tmp1;
	int	len;

	len = ft_nb_len(var.nbr, 10);
	str = ft_itoa(var.nbr);
	if (type->precision > -1 && type->precision > len)
		tmp = ft_str_putchar('0', type->precision - len);
	if (var.nbr < 0)
		var.sign = '-';
	else
		var.sign = (type->p) ? '+' : '0';	
	tmp1 = str;
	free(tmp1);
	if (tmp)
		str = (var.sign != '0') ? ft_strjoin(tmp, str + 1) : ft_strjoin(tmp, str);
	tmp = ft_str_putchar(var.sign, 1);
	printf("tmp = %s\n", tmp);
	str = ft_strcat(tmp, str);
	ft_putstr(str);
}
	

void	ft_fetch_arg_next(t_conv *type, va_list arg, t_type var)
{
	if (type->c == 'd')
	{
		var.nbr = va_arg(arg, int);
		convertint(var, type);
	}
}
