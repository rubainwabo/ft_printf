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

void	ft_padding_no_pre_u(t_conv *type, char *str, int len)
{
	char	*strp;
	int		add;

	if (type->padding > len)
	{
		add = (type->precision == -1 && type->z != 0 && type->m == 0) ? 48 : 32;
        type->padding -= len;
        type->padding -= (type->h) ? 1 : 0;
		strp = ft_str_putchar(add, type->padding);
		ft_putrev_str(str, strp, type);
	}
	else
		ft_putstr(str);
}
void	ft_padding_pre_u(t_conv *type, char *str)
{
	char	*strp;

	if (type->padding > type->precision)
	{
		type->padding -= type->precision;
        type->padding -= (type->h) ? 1 : 0;
		strp = ft_str_putchar(' ', type->padding);
		ft_putrev_str(str, strp, type);
	}
	else
		ft_putstr(str);
}

void	convert_octal(unsigned int val, t_conv *type)
{
	char	*str;
	char	*tmp;
	int		len;

	len = ft_nb_len(val, 8);
	str = ft_itoa_base(val, 8, 0, len);
    tmp = (type->h) ? ft_str_putchar('0', 1) : 0;
    str = (type->h) ? ft_strjoin_free(tmp, str) : str;
	if (type->precision > len)
	{
        type->precision -= (type->h) ? 1 : 0;
		tmp = ft_str_putchar('0', (type->precision - len));
		str = ft_strjoin_free(tmp, str);
		ft_padding_pre_u(type, str);
	}
	else
		(type->precision == 0 && val == 0) ? ft_padding_no_pre_u(type, NULL, len)
		: ft_padding_no_pre_u(type, str, len);	
}