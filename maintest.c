/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 13:26:28 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/16 13:13:08 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int		main(void)
{
	char	*str;

	str = "All fine18";
	long long test = -1155556894;
//	printf("number=%oooood\n", number);
	printf("string = %llo\n", test);
	printf("test = %s\n", ft_itoa_base(test, 8, 0));
	//printf("number=%.5 5d\n", number);

	printf("----TEST OF THE DOIUXx CONVERSION----\n");

	printf("first integer = %.1d\n", 0);
	printf("second integer =% 030.6d\n", -12000);
	return (0);
}
