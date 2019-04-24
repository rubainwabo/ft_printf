/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 01:06:31 by rkamegne          #+#    #+#             */
/*   Updated: 2018/10/23 14:11:30 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*str;
	int		i;

	i = -1;
	str = NULL;
	if (!s1 || !s2)
		return ((s1) ? s1 : s2);
	if (!(str = (char*)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	str[i] = '\0';
	free(s1);
	ft_strcat_free(str, s2);
	return (str);
}