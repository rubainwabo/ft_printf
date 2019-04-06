/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getFlags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:56:27 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/06 02:27:24 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_getFlags(const char * restrict format)
{
	char 	*flag;
	char 	*ptr;
	int 	i;

	if (!(flag = (char*)malloc(sizeof(*flag) * ft_strlen_err(format) + 1)))
		return (NULL);
	ptr = flag;
	while (*format)
	{
		i = 0;
		if (*format != FLAGS[i])
			i++;
		else if (*format == FLAGS[i])
			*(ptr++) = *(format++);
		if (i == ft_strlen_err(FLAGS))
			break;
	}
	*ptr = '\0';
	return (flag);
}

// void 	ft_getConversion(const char restrict *format, va_list arg)
// {
//
// }
