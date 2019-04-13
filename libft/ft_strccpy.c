/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:27:44 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/08 15:28:01 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *src, size_t len)
{
	size_t	i;
	char	*dst;

	i = -1;
	if (!(dst = ft_strnew(ft_strlen(src))))
		exit(EXIT_FAILURE);
	while (++i < len && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
