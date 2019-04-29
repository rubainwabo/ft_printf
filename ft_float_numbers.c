/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 18:37:24 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/26 18:37:25 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_convert_float(long double nbr, t_conv *type)
{
    (void)nbr;
    if (type->precision == -1)
        type->precision = 6;
}