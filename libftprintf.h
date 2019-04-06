/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:31:11 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/06 02:28:46 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# define TYPES "cspdiouxX"
# define FLAGS " #0-+hlL"

char	*ft_parse(const char *restrict format);
char	*ft_getFlags(const char * restrict format);
int		ft_printf(const char * restrict format, ...);
#endif
