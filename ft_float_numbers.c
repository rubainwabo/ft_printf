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

double  ft_roundf(long double nbr, t_conv *type)
{
    double     dec;
    int         tmp;
    int         i;
    int         res;

    i = 0;
    res = 0;
    dec = nbr - (long int)nbr;
    while (i++ < type->precision)
    {
        dec -= (int)dec;
        dec *= 10;
        tmp = (int)dec;
        if (i == type->precision)
        {
            dec -= (int)dec;
            dec *= 10;
            tmp += ((int)dec >= 5) ? 1 : 0;
        }
        res *= 10 + tmp;
    }
    while (i--)
        res /= 10;
    return ((long int)nbr + res);
}

void    ft_convert_float(long double nbr, t_conv *type)
{
    (void)nbr;
    if (type->precision == -1)
        type->precision = 6;
    
}