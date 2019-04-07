/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkamegne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 02:25:46 by rkamegne          #+#    #+#             */
/*   Updated: 2019/04/06 20:39:43 by rkamegne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int 	main(void)
{
	// Tests for printf
	ft_printf("-------- FT_PRINTF PARSING TEST --------\n\n");
	//ft_printf("test5: %055.1111110d\n");
/*	ft_printf("test1 : print of a=%++2525#++.55--de hello and %++++.66---X this guy is moving %+. #4u ii\n");*/
	ft_printf("test2: %-- .1215545 1d this works? Yes i guess %1++#.115defef\n");
/*	ft_printf("test3 : %0000         xThis one is not tricky%++++ddddate of %.u day\n");
	ft_printf("test4: %----------cmonkas, i like %#i twitch\n");
	ft_printf("test5: %+++d eeeeeeeeeeeeeeeee\n");*/
	/*ft_printf("test6: string without any problem!\n");
	ft_printf("test7: %++++----o obliged to %+++++\n");
	// printf of the libc
	printf("-------- PRINTF PARSING TEST --------\n\n");
	printf("test1 : print of a=%++++--de hello and %++++---X this guy is moving %4u ii\n");
	printf("test2: %-- 1d this works? Yes i guess %1++defef\n");
	printf("test3 : %          xThis one is not tricky%++++ddddate of %.u day\n");
	printf("test4: %----------cmonkas, i like %#i twitch\n");
	printf("test5: %+++d eeeeeeeeeeeeeeeee\n");
	printf("test6: string without any problem!\n");
	printf("test7: %++++----o obliged to %+++++\n");*/
	return (0);
}
