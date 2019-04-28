
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

int 	main(void)
{
	//tests for printf
/*	ft_printf("-------- FT_PRINTF PARSING TEST --------\n %s\n");
	ft_printf("percent percent managed --- %%%%ffff%%%%%%%+++99d\n");
	ft_printf("test5: %055.1111110d\n");
	ft_printf("test1 : %+-+++#x ioi %lold %###--u % ++ hhh .52 25s\n");
	ft_printf("test2: %.55Lllhhhh+12155451.22d this works? Yes i guess %--l-l59lL++#.115 33defef\n");
	ft_printf("test3 : %0000         xThis one is not tricky%++++ddddate of %.u day\n");
	ft_printf("test4: %----------cmonkas, i like %#i twitch\n");*/
	ft_printf("test5: %++hhhhhllfwfffffffffffff+d eeeeeeeeeeeeeeeee\n");
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
	ft_printf("-------- CSP CONVERSION TEST --------\n\n");
	
	ft_printf("--------       CHAR          --------\n\n");
	char	c = 49;
	ft_printf("character = %+-.0c\n", c);
	printf("---libc character = %+-.0c\n", c);
	ft_printf("character with 0 flag = %0c\n", c);
	printf("---libc character with 0 flag = %0c\n", c);
	ft_printf("character with - flag = %-c\n", c);
	printf("---libc character with - flag = %-c\n", c);
	ft_printf("character with 0 + padding of 5 flag = %05c\n", c);
	printf("---libc character with 0 + padding of 5 flag = %05c\n", c);
	ft_printf("character with \'-\' + padding of 5 flag = %-5c\n", c);
	printf("---libc character with \'-\' + padding of 5 flag = %-5c\n", c);
	ft_printf("character with \'-\' + 0 + padding of 5 flag = %-05c\n", c);
	printf("---libc character with \'-\' + 0 + padding of 5 flag = %-05c\n", c);

	ft_printf("--------     STRING         --------\n\n");

	char  *toto = "hi, this is my own printf don't laugh at it";
	int   nbr = 10;
	ft_printf("---mine string = %.5s\n", toto, "spaces to make sure!");
	printf("---libc string = %.5s\n", toto, "spaces to make sure!");
	ft_printf("---mine string = %-49s\n", toto, "spaces to make sure!");
	printf("---libc string = %-49s\n", toto, "spaces to make sure!");
	ft_printf("---mine string = %0 .29s\n", toto, "spaces to make sure!");
	printf("---libc string = %0 .29s\n", toto, "spaces to make sure!");
	ft_printf("---mine string = %-40 .10s\n", toto, "spaces to make sure!");
	printf("---libc string = %-40 .10s\n", toto, "spaces to make sure!");
	ft_printf("---mine string = %040 .-3s\n", "ab", "spaces to make sure!");
	printf("---libc string = %040 .-3s\n", "ab", "spaces to make sure!");
	//ft_printf("he,re!!!\n", "spaces to make sure!");ft_putendl(ft_strccpy(,toto, 0), "spaces to make sure!");

	ft_printf("----------  POINTER    -----------,---\n\n", "spaces to make sure!");

	ft_printf("---mine string = %10p\n", toto, "spaces to make sure!");
	printf("---libc string = %10p\n", toto, "spaces to make sure!");
	ft_printf("---mine string = %0.29s\n", toto, "spaces to make sure!");
	printf("---libc string = %0.29s\n", toto, "spaces to make sure!");
	ft_printf("---mine string = %.5p\n", toto, "spaces to make sure!");
	printf("---libc string = %.5p\n",  toto, "spaces to make sure!");
	ft_printf("---mine string = %040 .03p\n", "ab", "spaces to make sure!");
	printf("---libc string = %040.03p\n", "ab", "spaces to make sure!");

	ft_printf("---------INTEGERS------------,---\n\n", "spaces to make sure!");

	ft_printf("mine   number = %15,c %s\n", 97, "spaces to make sure!");
	printf("printf number = %15,c %s\n", 97, "spaces to make sure!");
	ft_printf("mine   number =%5.2d, %s\n", -10, "spaces to make sure!");
	printf("printf number =%5.2d, %s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%.,0d %s\n", 0, "spaces to make sure!");
	printf("printf number =%.,0d %s\n", 0, "spaces to make sure!");
	ft_printf("mine   number =%010.2d, %s\n", -10, "spaces to make sure!");
	printf("printf number =%010.2d, %s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%0 5,d %s\n", 15, "spaces to make sure!");
	printf("printf number =%0 5,d %s\n", 15, "spaces to make sure!");
	ft_printf("mine   number =% d, %s\n", 123, "spaces to make sure!");
	printf("printf number =% d, %s\n", 123, "spaces to make sure!");
	ft_printf("mine   number =% 05,d %s\n", 10, "spaces to make sure!");
	printf("printf number =% 05,d %s\n", 10, "spaces to make sure!");
	ft_printf("mine   number = %-9.,6d %s\n", 1, "spaces to make sure!");
	printf("printf number = %-9.,6d %s\n", 1, "spaces to make sure!");
	ft_printf("mine   number =% 010d,%s\n", -10, "spaces to make sure!");
	printf("printf number =% 010d,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%-0 5d,%s\n", -15, "spaces to make sure!");
	printf("printf number =%-0 5d,%s\n", -15, "spaces to make sure!");

	ft_printf("------OCTAL CONVERSION-----,---\n %s\n", "spaces to make sure!");

	ft_printf("mine   number =%5.2o,%s\n", -10, "spaces to make sure!");
	printf("printf number =%5.2o,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%-0+5o,%s\n", 0, "spaces to make sure!");
	printf("printf number =%-0+5o,%s\n", 0, "spaces to make sure!");
	ft_printf("mine   number =%010.2o,%s\n", -10, "spaces to make sure!");
	printf("printf number =%010.2o,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%0 5o,%s\n", 15, "spaces to make sure!");
	printf("printf number =%0 5o,%s\n", 15, "spaces to make sure!");
	ft_printf("mine   number =% o,%s\n", 123, "spaces to make sure!");
	printf("printf number =% o,%s\n", 123, "spaces to make sure!");
	ft_printf("mine   number =% 05o,%s\n", 10, "spaces to make sure!");
	printf("printf number =% 05,o%s\n", 10, "spaces to make sure!");
	ft_printf("mine   number = %0,5o%s\n", 0, "spaces to make sure!");
	printf("printf number = %05o,%s\n", 0, "spaces to make sure!");
	ft_printf("mine   number =%015o,%s\n", -10, "spaces to make sure!");
	printf("printf number =%015o,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%#20o,%s\n", -15, "spaces to make sure!");
	printf("printf number =%#20o,%s\n", -15, "spaces to make sure!");

	ft_printf("------UNSIGNED CONVERSION-----,---\n %s\n", "spaces to make sure!");

	ft_printf("mine   number =%5.2u,%s\n", -10, "spaces to make sure!");
	printf("printf number =%5.2u,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%0+5u,%s\n", 0, "spaces to make sure!");
	printf("printf number =%0+5u,%s\n", 0, "spaces to make sure!");
	ft_printf("mine   number =%010.2u,%s\n", -10, "spaces to make sure!");
	printf("printf number =%010.2u,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%0 5u,%s\n", 15, "spaces to make sure!");
	printf("printf number =%0 5u,%s\n", 15, "spaces to make sure!");
	ft_printf("mine   number =% u,%s\n", 123, "spaces to make sure!");
	printf("printf number =% u,%s\n", 123, "spaces to make sure!");
	ft_printf("mine   number =% 05u %s\n", 1058845644, "spaces to make sure!");
	printf("printf number =% 05u %s\n", 1058845644, "spaces to make sure!");
	ft_printf("mine   number = %05u,%s\n", 0, "spaces to make sure!");
	printf("printf number = %05u,%s\n", 0, "spaces to make sure!");
	ft_printf("mine   number =%-015u,%s\n", -10, "spaces to make sure!");
	printf("printf number =%-015u,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%-.20#20u,%s\n", -15, "spaces to make sure!");
	printf("printf number =%-.20#20u,%s\n", -15, "spaces to make sure!");

	ft_printf("------HEX CONVERSION-----,---\n %s\n", "spaces to make sure!");

	ft_printf("mine   number =%#5.9x,%s\n", -10, "spaces to make sure!");
	printf("printf number =%#5.9x,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%0+5X,%s\n", 0, "spaces to make sure!");
	printf("printf number =%0+5X,%s\n", 0, "spaces to make sure!");
	ft_printf("mine   number =%010.2X,%s\n", -10, "spaces to make sure!");
	printf("printf number =%010.2X,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%0 5X,%s\n", 15, "spaces to make sure!");
	printf("printf number =%0 5X,%s\n", 15, "spaces to make sure!");
	ft_printf("mine   number =% X,%s\n", 123, "spaces to make sure!");
	printf("printf number =% X,%s\n", 123, "spaces to make sure!");
	ft_printf("mine   number =%#05X,%s\n", 1058845644, "spaces to make sure!");
	printf("printf number =%#05X,%s\n", 1058845644, "spaces to make sure!");
	ft_printf("mine   number = %.0X,%s\n", 0, "spaces to make sure!");
	printf("printf number = %.0X,%s\n", 0, "spaces to make sure!");
	ft_printf("mine   number =%-#015o,%s\n", -10, "spaces to make sure!");
	printf("printf number =%-#015o,%s\n", -10, "spaces to make sure!");
	ft_printf("mine   number =%24.20#X,%s\n", -15, "spaces to make sure!");
	printf("printf number =%24.20#X,%s\n", -15, "spaces to make sure!");

	ft_printf("--------- COUNTING TEST------------\n\n");

	ft_printf("%d\n",ft_printf("123ndd    123456789= %s, x = %#100X\n", "audrey works cause she is belgian", -15));
	int a = printf("123ndd    123456789= %s, x = %#100X\n", "audrey works cause she is belgian", -15);
	ft_putnbr(a);
	return (0);
}
