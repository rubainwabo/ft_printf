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

long double		ft_roundf(long double nbr, int precision)
{
    double     dec;
    int         tmp;
    int         i;
    double		res;

    i = 0;
    res = 0;
    dec = nbr - (long int)nbr;
    while (i++ < precision)
    {
        dec -= (int)dec;
        dec *= 10;
        tmp = (int)dec;
        if (i == precision)
        {
            dec -= (int)dec;
            dec *= 10;
            tmp += ((int)dec >= 5) ? 1 : 0;
        }
        res = res * 10 + tmp;
    }
    while (i-- > 1)
        res /= 10;
    return ((long int)nbr + res);}

int		main(void)
{
	char	*str;

	str = "All fine18";
	int 	a;
	long long test = -1155556894;
//	printf("number=%oooood\n", number);
	//printf("string = %llo\n", test);
	//printf("number=%.5 5d\n", number);

	printf("----TEST OF THE DOIUXx CONVERSION----\n");

	//printf("first integer =%5.6d\n", 0);
//	printf("second integer =% 030.6d\n", -12000);
//	printf("value of the long double max %Lf\n", LDBL_MAX);
	//printf("integer =%-05c\n", 49);
	double	dec = 1.35409;
	printf("round of dec = %.7Lf\n", ft_roundf(dec, 7));
    printf("rounding of dec by printf = %.7f\n", dec);
}
