/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:36:15 by rkamegne          #+#    #+#             */
/*   Updated: 2019/03/17 17:45:18 by rkamegne         ###   ########.fr       */
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

int		ft_printf(const char restrict *format, ...)
{
	va_list	arg;
	va_start(arg, format);
	const restrict char 	*f;
	while (*format)
	{
		if (*format == '%')
			f = ft_getFlags(format, arg);
		else
			ft_putchar(*format);
		format++;
	}
	va_end(arg);
	ft_putendl(f);
	return (0);
}

int		main(void)
{
	ft_printf("%+++++-d\n");
	return (0);
}
