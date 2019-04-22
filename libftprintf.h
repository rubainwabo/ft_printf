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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>
# define TYPES "%cfspdiouxXb"

typedef struct		s_conv
{
	char			c;
	int				padding;
	int				precision;
	char			size;
	int				h;
	int				m;
	int				p;
	int				z;
	int				s;
	int				count;
	int				base;
	int				star;
}					t_conv;

int					ft_init(t_conv **type);
int					ft_patoi(char *str, int *offset);
char				*ft_check_sign(intmax_t nbr, t_conv *type);
void				ft_putrev_char(unsigned char c, char *str, t_conv *type);
void				ft_putrev_str(char *str, char *strp, t_conv *type);
void				ft_putnull(t_conv *type);
void				ft_padding_no_preu(uintmax_t val, t_conv *type,
														char *str, int len);
void				ft_padding_preu(t_conv *type, char *str);
void				ft_padding_no_pre(intmax_t nbr, char *sign, t_conv *type,
																	char *str);
void				ft_convert_float(long double nbr, t_conv *type);
intmax_t			ft_size_signed(t_conv *type, va_list arg);
uintmax_t			ft_size_unsigned(t_conv *type, va_list arg);
void				convert_unsigned(uintmax_t val, t_conv *type);
void				ft_fetch_arg(t_conv *type, va_list arg);
void				ft_fetch_arg2(t_conv *type, va_list arg);
void				ft_fetch_arg3(t_conv *type, va_list arg);
int					ft_parse(const char *restrict format, va_list arg);
int					ft_printf(const char *restrict format, ...);
#endif
