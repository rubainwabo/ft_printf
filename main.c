
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 02:25:46 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/07 17:30:37 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


	///// CANCER //////

		// double		dec;
	// int			tmp;
	// int			i;
	// double		res;

	// i = 0;
	// res = 0;
	// dec = nbr - (int)nbr;
	// while (i++ < type->precision)
	// {
	// 	dec *= 10.0;
	// 	tmp = (int)dec;
	// 	// if (i == type->precision)
	// 	// {
	// 	// 	dec -= (int)dec;
	// 	// 	dec *= 10;
	// 	// 	tmp += ((int)dec >= 5) ? 1 : 0;
	// 	// }
	// 	printf("in rounding tmp = %d\n", tmp);
	// 	res = res * 10.0 + tmp;
	// 	dec -= tmp;
	// 	printf("in rounding res = %f\n", res);
	// }
	// while (i-- > 1)
	// 	res /= 10.0;
	// return ((int)nbr + res);

int 	main(void)
{
	//ests for printf
/*	ft_printf("-------- FT_PRINTF PARSING TEST --------\n %s\n");
	ft_printf("percent percent managed --- %%%%ffff%%%%%%%+++99d\n");
	ft_printf("test5: %055.1111110d\n");
	ft_printf("test1 : %+-+++#x ioi %lold %###--u % ++ hhh .52 25s\n");
	ft_printf("test2: %.55Lllhhhh+12155451.22d this works? Yes i guess %--l-l59lL++#.115 33defef\n");
	ft_printf("test3 : %0000         xThis one is not tricky%++++ddddate of %.u day\n");
	ft_printf("test4: %----------cmonkas, i like %#i twitch\n");*/
	//ft_printf("test5: %++hhhhhllfwfffffffffffff+d eeeeeeeeeeeeeeeee\n");
/*	ft_printf("test6: string without any problem!\n");
	ft_printf("test7: %++++----o obliged to %+++++\n");
	printf of the libc
	printf("-------- PRINTF PARSING TEST --------\n\n");
	printf("test1 : print of a=%++++--de hello and %++++---X this guy is moving %4u ii\n");
	printf("test2: %-- 1d this works? Yes i guess %1++defef\n");
	printf("test3 : %          xThis one is not tricky%++++ddddate of %.u day\n");
	printf("test4: %----------cmonkas, i like %#i twitch\n");
	printf("test5: %+++d eeeeeeeeeeeeeeeee\n");
	printf("test6: string without any problem!\n");
	printf("test7: %++++----o obliged to %+++++\n");*/
	/*
		printf("\nprecision = %d\n", type->precision);
	printf("padding = %d\n", type->padding);
	printf("size = %c\n", type->size);
	printf("conversion type = %c\n", type->c);
	printf("----flags activated----\n");
	printf("zero : %d\n", type->z);
	printf("space : %d\n", type->s);
	printf("plus : %d\n", type->p);
	printf("minus : %d\n", type->m);
	printf("hashtag : %d\n", type->h);*/
	// ft_printf("-------- CSP CONVERSION TEST --------\n\n");
	
	// ft_printf("--------       CHAR          --------\n\n");
	// char	c = 49;
	// ft_printf("character = %+-.0c\n", c);
	// printf("---libc character = %+-.0c\n", c);
	// ft_printf("character with 0 flag = %0c\n", c);
	// printf("---libc character with 0 flag = %0c\n", c);
	// ft_printf("character with - flag = %-c\n", c);
	// printf("---libc character with - flag = %-c\n", c);
	// ft_printf("character with 0 + padding of 5 flag = %05c\n", c);
	// printf("---libc character with 0 + padding of 5 flag = %05c\n", c);
	// ft_printf("character with \'-\' + padding of 5 flag = %-5c\n", c);
	// printf("---libc character with \'-\' + padding of 5 flag = %-5c\n", c);
	// ft_printf("character with \'-\' + 0 + padding of 5 flag = %-05c\n", c);
	// printf("---libc character with \'-\' + 0 + padding of 5 flag = %-05c\n", c);

	// ft_printf("--------     STRING         --------\n\n");

	// char  *toto = "hi, this is my own printf don't laugh at it";
	// int   nbr = 10;
	// ft_printf("---mine string = %.5s\n", toto, "spaces to make sure!");
	// printf("---libc string = %.5s\n", toto, "spaces to make sure!");
	// ft_printf("---mine string = %-49s\n", toto, "spaces to make sure!");
	// printf("---libc string = %-49s\n", toto, "spaces to make sure!");
	// ft_printf("---mine string = %0 .29s\n", toto, "spaces to make sure!");
	// printf("---libc string = %0 .29s\,n", toto, "spaces to make sure!");
	// ft_printf("---mine string = %-40 .10s\n", toto, "spaces to make sure!");
	// printf("---libc string = %-40 .10s\n", toto, "spaces to make sure!");
	// ft_printf("---mine string = %040 .-3s\n", "ab", "spaces to make sure!");
	// printf("---libc string = %040 .-3s\n", "ab", "spaces to make sure!");

	// ft_printf("----------  POINTER    -----------,---\n\n", "spaces to make sure!");

	// ft_printf("---mine string = %10p\n", toto, "spaces to make sure!");
	// printf("---libc string = %10p\n", toto, "spaces to make sure!");
	// ft_printf("---mine string = %0.29s\n", toto, "spaces to make sure!");
	// printf("---libc string = %0.29s\n", toto, "spaces to make sure!");
	// ft_printf("---mine string = %.5p\n", toto, "spaces to make sure!");
	// printf("---libc string = %.5p\n,",  toto, "spaces to make sure!");
	// ft_printf("---mine string = %040 .03p\n", "ab", "spaces to make sure!");
	// printf("---libc string = %040.03p\n", "ab", "spaces to make sure!");

	// ft_printf("---------INTEGERS------------,---\n\n", "spaces to make sure!");

	// ft_printf("mine   number = %15,c %s\n", 97, "spaces to make sure!");
	// printf("printf number = %15,c %s\n", 97, "spaces to make sure!");
	// ft_printf("mine   number =%5.2d, %s\n", -10, "spaces to make sure!");
	// printf("printf number =%5.2d, %s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%.,0d %s\n", 0, "spaces to make sure!");
	// printf("printf number =%.,0d %s\n", 0, "spaces to make sure!");
	// ft_printf("mine   number =%010.2d, %s\n", -10, "spaces to make sure!");
	// printf("printf number =%010.2d, %s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%0 5,d %s\n", 15, "spaces to make sure!");
	// printf("printf number =%0 5,d %s\n", 15, "spaces to make sure!");
	// ft_printf("mine   number =% d, %s\n", 123, "spaces to make sure!");
	// printf("printf number =% d, %s\n", 123, "spaces to make sure!");
	// ft_printf("mine   number =% 05,d %s\n", 10, "spaces to make sure!");
	// printf("printf number =% 05,d %s\n", 10, "spaces to make sure!");
	// ft_printf("mine   number = %-9.,6d %s\n", 1, "spaces to make sure!");
	// printf("printf number = %-9.,6d %s\n", 1, "spaces to make sure!");
	// ft_printf("mine   number =% 010d,%s\n", -10, "spaces to make sure!");
	// printf("printf number =% 010d,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%-0 5d,%s\n", -15, "spaces to make sure!");
	// printf("printf number =%-0 5d,%s\n", -15, "spaces to make sure!");

	// ft_printf("------OCTAL CONVERSION-----,---\n %s\n", "spaces to make sure!");

	// ft_printf("mine   number =%5.2o,%s\n", -10, "spaces to make sure!");
	// printf("printf number =%5.2o,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%-0+5o,%s\n", 0, "spaces to make sure!");
	// printf("printf number =%-0+5o,%s\n", 0, "spaces to make sure!");
	// ft_printf("mine   number =%010.2o,%s\n", -10, "spaces to make sure!");
	// printf("printf number =%010.2o,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%0 5o,%s\n", 15, "spaces to make sure!");
	// printf("printf number =%0 5o,%s\n", 15, "spaces to make sure!");
	// ft_printf("mine   number =% o,%s\n", 123, "spaces to make sure!");
	// printf("printf number =% o,%s\n", 123, "spaces to make sure!");
	// ft_printf("mine   number =% 05o,%s\n", 10, "spaces to make sure!");
	// printf("printf number =% 05,o%s\n", 10, "spaces to make sure!");
	// ft_printf("mine   number = %0,5o%s\n", 0, "spaces to make sure!");
	// printf("printf number = %05o,%s\n", 0, "spaces to make sure!");
	// ft_printf("mine   number =%015o,%s\n", -10, "spaces to make sure!");
	// printf("printf number =%015o,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%#20o,%s\n", -15, "spaces to make sure!");
	// printf("printf number =%#20o,%s\n", -15, "spaces to make sure!");

	// ft_printf("------UNSIGNED CONVERSION-----,---\n %s\n", "spaces to make sure!");

	// ft_printf("mine   number =%5.2u,%s\n", -10, "spaces to make sure!");
	// printf("printf number =%5.2u,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%0+5u,%s\n", 0, "spaces to make sure!");
	// printf("printf number =%0+5u,%s\n", 0, "spaces to make sure!");
	// ft_printf("mine   number =%010.2u,%s\n", -10, "spaces to make sure!");
	// printf("printf number =%010.2u,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%0 5u,%s\n", 15, "spaces to make sure!");
	// printf("printf number =%0 5u,%s\n", 15, "spaces to make sure!");
	// ft_printf("mine   number =% u,%s\n", 123, "spaces to make sure!");
	// printf("printf number =% u,%s\n", 123, "spaces to make sure!");
	// ft_printf("mine   number =% 05u %s\n", 1058845644, "spaces to make sure!");
	// printf("printf number =% 05u %s\n", 1058845644, "spaces to make sure!");
	// ft_printf("mine   number = %05u,%s\n", 0, "spaces to make sure!");
	// printf("printf number = %05u,%s\n", 0, "spaces to make sure!");
	// ft_printf("mine   number =%-015u,%s\n", -10, "spaces to make sure!");
	// printf("printf number =%-015u,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%-.20#20u,%s\n", -15, "spaces to make sure!");
	// printf("printf number =%-.20#20u,%s\n", -15, "spaces to make sure!");

	// ft_printf("------HEX CONVERSION--------\n\n");

	// ft_printf("mine   number =%#5.9x, %s\n", -10, "spaces to make sure!");
	// printf("printf number =%#5.9x,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%0+5X,%s\n", 0, "spaces to make sure!");
	// printf("printf number =%0+5X,%s\n", 0, "spaces to make sure!");
	// ft_printf("mine   number =%010.2X,%s\n", -10, "spaces to make sure!");
	// printf("printf number =%010.2X,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%0 5X,%s\n", 15, "spaces to make sure!");
	// printf("printf number =%0 5X,%s\n", 15, "spaces to make sure!");
	// ft_printf("mine   number =% X,%s\n", 123, "spaces to make sure!");
	// printf("printf number =% X,%s\n", 123, "spaces to make sure!");
	// ft_printf("mine   number =%#05X,%s\n", 1058845644, "spaces to make sure!");
	// printf("printf number =%#05X,%s\n", 1058845644, "spaces to make sure!");
	// ft_printf("mine   number = %.0X,%s\n", 0, "spaces to make sure!");
	// printf("printf number = %.0X,%s\n", 0, "spaces to make sure!");
	// ft_printf("mine   number =%-#015o,%s\n", -10, "spaces to make sure!");
	// printf("printf number =%-#015o,%s\n", -10, "spaces to make sure!");
	// ft_printf("mine   number =%24.20#X,%s\n", -15, "spaces to make sure!");
	// ft_printf("%d", 4242);

	// ft_printf("-----------FLOATING TEST FOR PRINTF--------\n");
	// ft_printf("+ float test = %+.2lfspaces to make sure!\n", -92.45600);
	// printf("- float test = %+.2lfspaces to make sure!\n", -92.45600);
	// ft_printf("+ float test = %+18.6lfspaces to make sure!\n", 922337.2036854775808);
	// printf("- float test = %+18.6lfspaces to make sure!\n", 922337.2036854775808);
	// ft_printf("+ float test = %0 15Lfspaces to make sure!\n", (long double)365.165);
	// printf("- float test = %0 15Lfspaces to make sure!\n", (long double)365.165);
// 		int a = 0;



// 	a = printf("%%\n");
// 	printf("a = %d\n", a);
// 	a = ft_printf("%%\n");
// 	printf("a = %d\n", a);
	
// 	printf("here a = %d\n", a);


//     ft_printf("%i test %i testo %d %s\n",17, 1999, 28, "dsds");
//        printf("%i test %i testo %d %s\n",17, 1999, 28, "dsds");


//  a = ft_printf("%6.4s %-15c %% %llu %+0d %dtest%#o %00d %+06d %d % 6d %f %.3lf %.3Lf %#x %#X \n",
//  		"hello", 'a', (unsigned long long)17, 188, 18, 19, 199, 20, 31, 31,
//  		 15.5, 12345.6789, (long double)98765.4321, 15, 15);

//     printf("%d\n",a);

//     a = printf("%6.4s %-15c %% %llu %+0d %dtest%#o %00d %+06d %d % 6d %f %.3lf %.3Lf %#x %#X \n",
//     	"hello", 'a', (unsigned long long)17, 188, 18, 19, 199, 20, 31, 31,
//     	 15.5, 12345.6789, (long double)98765.4321, 15, 15);
//     printf("%d\n",a);



// 	printf("%######ll.12d\n", 17);
// 	ft_printf("%######ll.12d\n", 17);


// 	printf("%-10s is a string\n", "this");
// 	ft_printf("%-10s is a string\n", "this");
// 	printf("%-.2s is a string\n", "this");
// 	ft_printf("%-.2s is a string\n", "this");
// 	printf("%-5.2s is a string\n", "this");
// 	ft_printf("%-5.2s is a string\n", "this");
// 	printf("@moulitest: %s\n", NULL);
// 	ft_printf("@moulitest: %s\n", NULL);
// 	printf("%s %s\n", NULL, "string");
// 	ft_printf("%s %s\n", NULL, "string");


// 	printf("%10s is a string\n", "");
// 	ft_printf("%10s is a string\n", "");
// 	printf("%.2s is a string\n", "");
// 	ft_printf("%.2s is a string\n", "");
// 	printf("%5.2s is a string\n", "");
// 	ft_printf("%5.2s is a string\n", "");
// 	printf("%-10s is a string\n", "");
// 	ft_printf("%-10s is a string\n", "");
// 	printf("%-.2s is a string\n", "");
// 	ft_printf("%-.2s is a string\n", "");
// 	printf("%-5.2s is a string\n", "");
// 	ft_printf("%-5.2s is a string\n", "");

// 	printf("%d\n", a);

// 	printf("@moulitest: %c hello\n", 0);
// 	ft_printf("@moulitest: %c hello\n", 0);


printf("o - %f\n", 10.5);
ft_printf("f - %f\n", 10.5);

printf("o - %.f\n", 10.5);
ft_printf("f - %.f\n", 10.5);

printf("o - %.0f\n", 10.5);
ft_printf("f - %.0f\n", 10.5);

printf("o - %#.0f\n", 10.5);
ft_printf("f - %#.0f\n", 10.5);

ft_printf("\n");
ft_printf("\n");

printf("o - %f\n", 11.5);
ft_printf("f - %f\n", 11.5);

printf("o - %.f\n", 11.5);
ft_printf("f - %.f\n", 11.5);

printf("o - %.0f\n", 11.5);
ft_printf("f - %.0f\n", 11.5);

printf("o - %#.0f\n", 11.5);
ft_printf("f - %#.0f\n", 11.5);

ft_printf("\n");
ft_printf("\n");


printf("o - %f\n", 12.5);
ft_printf("f - %f\n", 12.5);

printf("o - %.f\n", 12.5);
ft_printf("f - %.f\n", 12.5);

printf("o - %.0f\n", 12.5);
ft_printf("f - %.0f\n", 12.5);

printf("o - %#.0f\n", 12.5);
ft_printf("f - %#.0f\n", 12.5);

ft_printf("\n");
ft_printf("\n");


printf("o - %f\n", 16.5);
ft_printf("f - %f\n", 16.5);

printf("o - %.f\n", 16.5);
ft_printf("f - %.f\n", 16.5);

printf("o - %.0f\n", 16.5);
ft_printf("f - %.0f\n", 16.5);

	printf("o - %#.0f\n", 16.5);
	ft_printf("f - %#.0f\n", 16.5);
	return (0);
}
