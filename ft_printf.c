/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:36:15 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/06 16:43:33 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*char	*convert(unsigned long long num, int base)
{
	char	representation[] = "0123456789ABCDEF";
	char	buffer[50];
	char	*ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	do
	{
		*--ptr = representation[num%base];
		num /= base;
	}while (num != 0);
	return (ptr);
}

int		ft_printf(const char * restrict format, ...)
{
	const char	*str;

	str = ft_parsing(format);
	return (0);
}
int		main(int argc, char *argv[])
{
	const char	*str;

	str = "Hi! i am coding printf %p%d%i%x%X%i%u%g%G\n";
	ft_putstr(ft_parsing(str));
	return (0);
}*/

int		ft_printf(const char * restrict format, ...)
{
	va_list	arg;
	va_start(arg, format);
	ft_parse(format, arg);
	va_end(arg);
	return (0);
}
