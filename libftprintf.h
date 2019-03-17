/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <rkamegne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:31:11 by rkamegne          #+#    #+#             */
/*   Updated: 2019/03/17 17:03:52 by rkamegne         ###   ########.fr       */
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

char	*ft_parsing(const char *restrict format);

#endif
