/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:24:13 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/07 01:47:04 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_patoi(char *str, int *offset)
{
	int		nbr;

	nbr = 0;
	if (!str)
		return (0);
	while (ft_isdigit(str[*offset]))
	{
		nbr *= 10;
		nbr += str[(*offset)++] - '0';
	}
	(*offset)--;
	return (nbr);
}

void	ft_get_prec_padd(t_conv *type, char *str, int *i) //padding, precision
{
	if (str[*i] == '.')
	{
		*i += 1;
		type->precision = ft_patoi(str, i);
	}
	else if (ft_isdigit(str[*i]) && str[*i] > 0)
		type->padding = ft_patoi(str, i);	
}

void	ft_get_options(char *format, t_conv *type, int offset)
{
	int	i; // a stands for hh  and b for ll
	int	j;
	char			*str;
	int				nbr;

	i = -1;
	j = 0;
	type->precision = 0;
	type->padding = 0;
	if (!(str = (char*)ft_memcpy((void*)ft_strnew(offset), (void*)format,
					(size_t)offset)) || !(type->flags = ft_memalloc(11)))
		exit(EXIT_FAILURE);
	while (++i < offset)
	{
		if (str[i] == '+' && !ft_strchr(type->flags, '+'))
			type->flags[j++] = '+';
		else if (str[i] == '-' && !ft_strchr(type->flags, '-'))
			type->flags[j++] = '-';
		else if (str[i] == '#' && !ft_strchr(type->flags, '#'))
			type->flags[j++] = '#';
		else if (str[i] == ' ' && !ft_strchr(type->flags, ' '))
			type->flags[j++] = ' ';
		else if (str[i] == '0' && !ft_strchr(type->flags, '0'))
			type->flags[j++] = '0';
		else
			ft_get_prec_padd(type, str, &i);
	}
}

char	*ft_parse_conv(char *format)
{
	unsigned int		offset;
	char				*o; // offset pointer to check conversion type
	unsigned int		i;
	t_conv				*type;

	offset = 0;
	i = -1;
	if (!(type = (t_conv*)malloc(sizeof(*type))))
		exit(EXIT_FAILURE);
	while (TYPES[++i])
		if ((o = ft_strchr_alpha(format, TYPES[i])) &&
				(offset = o - format))
			break;
	if (o != NULL)
		type->c = *o;
	ft_get_options(format, type, offset);
	i = -1;
	while (type->flags[++i])
		printf("flags : %c\n", type->flags[i]);
	printf("precision = %d\n", type->precision);
	printf("padding = %d\n", type->padding);
	format += offset;
	return (format);
}

void		ft_parse(const char *restrict format, va_list arg)
{
	while (*format)
	{
		if (*format == '%')
			format = ft_parse_conv((char*)(format + 1));
		else
			ft_putchar(*format);
		format++;
	}
}
