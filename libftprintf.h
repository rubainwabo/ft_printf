/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:31:11 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/09 02:47:37 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# define TYPES "cfspdiouxX"

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

typedef struct 		s_type
{
	unsigned int		val;
	char				*str;
	unsigned long long	ptr;
}					t_type;

void	ft_init(t_conv **type);
int		ft_patoi(char *str, int *offset);
void	ft_putrev_char(unsigned char, char *str, t_conv *type);
void	ft_putrev_str(char *str, char *strp, t_conv *type);
void	ft_fetch_arg(t_conv *type, va_list arg);
void	ft_parse(const char *restrict format, va_list arg);
int		ft_printf(const char * restrict format, ...);
#endif
