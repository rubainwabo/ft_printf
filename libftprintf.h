/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:31:11 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/06 20:56:11 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# define TYPES "cspdiouxX"
# define FLAGS " #0-+hhlhllL"

typedef struct		s_conv
{
	char			c;
	int				padding;
	int				precision;
	char			size;
	int				h; //hashtag
	int				m; //minus
	int				p; //plus
	int				z; //zero
	int				s; //space
}					t_conv;
void	ft_init(t_conv **type);
int		ft_patoi(char *str, int *offset);
void	ft_parse(const char *restrict format, va_list arg);
char	*ft_getflags(const char * restrict format);
int		ft_printf(const char * restrict format, ...);
#endif
