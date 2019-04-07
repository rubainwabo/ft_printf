/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:24:13 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/07 16:02:44 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void		ft_get_size(t_conv *type, char *str, int i)
{
	unsigned int	count;

	count = 0;
	if (str[i] == 'l' && type->size == '0' && (count =
				ft_count_words(str + i, 'l')))
		type->size = (count % 2 == 0) ? 'a' : 'l';
	else if (str[i] == 'L' && type->size == '0')
		type->size = 'L';
	else if (str[i] == 'h' && type->size == '0' && (count =
				ft_count_words(str + i, 'h')))
		type->size = (count % 2 == 0) ? 'b' : 'h';
}


static void		ft_get_prec_padd(t_conv *type, char *str, int *i) //padding, precision
{
	if (str[*i] == '.' && type->precision == 0)
	{
		*i += 1;
		type->precision = ft_patoi(str, i);
	}
	else if (str[*i] == '.' && type->precision != 0)
	{
		*i += 1;
		ft_patoi(str, i);
	}
	else if (ft_isdigit(str[*i]) && (str[*i] - '0') > 0 && type->padding
		== 0)
		type->padding = ft_patoi(str, i);
	else
		ft_get_size(type, str, *i);	
}

static void			ft_get_options(char *format, t_conv *type, int offset)
{
	int 			i; // a stands for ll  and b for hh
	char			*str;
	int				nbr;

	i = -1;
	if (!(str = (char*)ft_memcpy((void*)ft_strnew(offset), (void*)format,
					(size_t)offset)))
		exit(EXIT_FAILURE);
	while (++i < offset)
	{
		// FLAGS
		if (str[i] == '+')
			type->p = 1;
		else if (str[i] == '-')
			type->m = 1;
		else if (str[i] == '#')
			type->h = 1;
		else if (str[i] == ' ')
			type->s = 1;
		else if (str[i] == '0')
			type->z = 1;
		else
			ft_get_prec_padd(type, str, &i);
	}
}

static char		*ft_parse_conv(char *format, va_list arg)
{
	unsigned int		offset;
	char				*o; // offset pointer to check conversion type
	unsigned int		i;
	t_conv				*type;

	if (*format == '%')
		ft_putchar('%');
	else
	{
		ft_init(&type);
		i = -1;
		offset = 0;
		while (TYPES[++i])
		{
			if ((o = ft_strchr_alpha(format, TYPES[i])))
			{
				offset = o - format;
				break;
			}
		}
		if (o != NULL)
			type->c = *o;
		ft_get_options(format, type, offset);
		format += offset;
	}
	return (format);
}

void		ft_parse(const char *restrict format, va_list arg)
{
	while (*format)
	{
		if (*format == '%')
			format = ft_parse_conv((char*)(format + 1), arg);
		else
			ft_putchar(*format);
		format++;
	}
}
