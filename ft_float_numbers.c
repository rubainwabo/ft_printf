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

long double		ft_roundf(long double nbr, t_conv *type)
{
    long double		dec;
    long long		tmp;
    long long		i;
    long double		res;

    i = 0;
    res = 0;
    dec = nbr - (long long)nbr;
    while (i++ < type->precision)
    {
        dec -= (long long)dec;
        dec *= 10;
        tmp = (long long)dec;
        if (i == type->precision)
        {
            dec -= (long long)dec;
            dec *= 10;
            tmp += ((long long)dec >= 5) ? 1 : 0;
        }
        res = res * 10 + tmp;
    }
    while (i-- > 1)
        res /= 10;
    return ((long long)nbr + res);
}


char	*ft_ftoa(long double nbr, t_conv *type)
{
	char			*str;
	int				i;
	double		dec;

	i = 0;
	if (type->precision == 0 ||
	!(str = ft_strnew(type->precision + 1)))
		return (NULL);
	str[i] = '.';
	str[type->precision + 1] = '\0';
	dec = nbr - (int)nbr;
	while (++i < type->precision + 1)
	{
		dec *= 10;
		str[i] = (int)dec + '0';
		dec -= (int)dec;
	}
	str[i] = '\0';
	//printf("utoa return = %s", ft_utoa((long long)nbr));
	return (ft_strjoin_free(ft_utoa((long long)nbr), str));
}

static short	ft_check_sign(intmax_t nbr, t_conv *type)
{
	short	sign;

	if (nbr < 0)
	{
		sign = '-';
		type->s = 0;
	}
	else
		sign = (type->p) ? '+' : 0;
	type->s = (type->p) ? 0 : type->s;
	return (sign);
}

void    ft_convert_float(long double nbr, t_conv *type)
{
	short	sign;

	sign = ft_check_sign(nbr, type);
	if (nbr < 0 )
		nbr = -nbr;
	if (type->precision == -1)
		type->precision = 6;
	nbr = ft_roundf(nbr, type);
	printf("rounded number = %Lf\n", nbr);
	(sign) ? ft_putchar(sign) : 0;
	ft_putstr(ft_ftoa(nbr, type));
}