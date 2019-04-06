/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:24:13 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/06 02:20:53 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_parsing(const char *restrict format)
{
	char		*tmp;
	char		*parser;
	const char	*traverse;

	traverse = format;
	if (!(parser = (char*)malloc(sizeof(*format) * ft_strlen(format) + 1)))
		return (NULL);
	tmp = parser;
	while (*traverse != '\0')
	{
		while (*traverse != '\0' && *traverse != '%')
		{
			ft_putchar(*traverse);
			traverse++;
		}
		traverse++;
		*tmp = *traverse;
		tmp++;
		traverse++;
	}
	*tmp = '\0';
	return (parser);
}
