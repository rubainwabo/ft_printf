/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:31:11 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/20 19:00:05 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# define TYPES "%cfspdiouUxX"

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
	int				count;
}					t_conv;

int			ft_init(t_conv **type);
int			ft_patoi(char *str, int *offset);
void		ft_putrev_char(unsigned char, char *str, t_conv *type);
void		ft_putrev_str(char *str, char *strp, t_conv *type);
void		ft_padding_no_pre_u(uintmax_t val, t_conv *type, char *str, int len, int base);
void		ft_padding_pre_u(t_conv *type, char *str, int base);
void		ft_convert_float(long double nbr, t_conv *type);
intmax_t	ft_size_signed(t_conv *type, va_list arg);
uintmax_t	ft_size_unsigned(t_conv *type, va_list arg);
void		convert_unsigned(uintmax_t val, t_conv *type, int base);
void		ft_fetch_arg(t_conv *type, va_list arg);
void		ft_fetch_arg2(t_conv *type, va_list arg);
void		ft_fetch_arg3(t_conv *type, va_list arg);
int			ft_parse(const char *restrict format, va_list arg);
int			ft_printf(const char * restrict format, ...);
#endif
