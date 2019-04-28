/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 13:26:28 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/18 14:10:54 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <float.h>
#include "libftprintf.h"

int		main(void)
{
	char	*str;

	str = "All fine18";
	int 	a;
	long long test = -1155556894;
//	printf("number=%oooood\n", number);
	//printf("string = %llo\n", test);
	//printf("number=%.5 5d\n", number);

// 	printf("----TEST OF THE DOIUXx CONVERSION----\n");

// 	//printf("first integer =%5.6d\n", 0);
// //	printf("second integer =% 030.6d\n", -12000);
// //	printf("value of the long double max %Lf\n", LDBL_MAX);
// 	//printf("integer =%-05c\n", 49);
// 	a = printf("unsigned int = %1s\n", "toto");
// 	printf("a = %d\n", a)
	long double ld = -1.111111111118881;
	double		nbr = 12565.36;

	//printf("ld = %Lf and nbr = %f\n", ld, nbr);
	//printf("number = %d\n",ft_printf("%x", 4294967296));
	//ft_printf("%012#x\n", 10);
	//ft_printf("@moulitest: %5.x%5.0x\n", 0, 0);
	//ft_printf("%.o %.0o\n", 0, 0);
	ft_printf("%lld", -9223372036854775808);
}
