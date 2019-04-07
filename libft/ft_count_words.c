/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:41:33 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/06 19:39:04 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *s, char c)
{
	int		count;
	int		sub;

	count = 0;
	sub = 0;
	while (*s)
	{
		if (sub == 1 && *s == c)
			sub = 0;
		if (sub == 0 && *s != c && (sub = 1))
			count++;
	}
	return (count);
}
