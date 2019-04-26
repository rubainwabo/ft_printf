/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_numbers2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 18:37:34 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/26 18:37:35 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

intmax_t	ft_size_signed(t_conv *type, va_list arg)
{
	if (type->size == 97) // 97 stands for 'a' which stands for the size ll
		return ((long long) va_arg(arg, int));
	else if (type->size == 98) // 98 stands for 'b' which stands for the size hh
		return ((char) va_arg(arg, int));
	else if (type->size == 104) // h
		return ((short) va_arg(arg, int));
	else if (type->size == 108) // l
		return ((long) va_arg(arg, int));
	else
		return (va_arg(arg, int));	
}

uintmax_t	ft_size_unsigned(t_conv *type, va_list arg)
{
	if (type->size == 97) // 97 stands for 'a' which stands for the size ll
		return ((unsigned long long) va_arg(arg, unsigned int));
	else if (type->size == 98) // 98 stands for 'b' which stands for the size hh
		return ((unsigned char) va_arg(arg, unsigned int));
	else if (type->size == 104) // h
		return ((unsigned short) va_arg(arg, unsigned int));
	else if (type->size == 108) // l
		return ((unsigned long) va_arg(arg, unsigned int));
	else
		return (va_arg(arg, unsigned int));	
}

long double		ft_size_float(t_conv *type, va_list arg)
{
	if (type->size == 76) // L
		return ((long double) va_arg(arg, long double));
	else if (type->size == 108)
		return ((long int) va_arg(arg, long double));
	else
		return ((double) va_arg(arg, long double));
}

void	ft_fetch_arg3(t_conv *type, va_list arg)
{
	uintmax_t		    val;
	//long double			nbr;
    
	if (type->c == 'u')
	{
	 	val = ft_size_unsigned(type, arg);
	 	convert_unsigned(val, type, 10);
	}
    else if (type->c == 'x' || type->c == 'X')
    {
        val = ft_size_unsigned(type, arg);
		convert_unsigned(val, type, 16);
    }
	/*else if (type->c == 'f')
	{
		nbr = ft_size_float(type, arg);
		ft_convert_float(nbr, type);
	}*/
}
