#include "libftprintf.h"

int	main(void)
{
	int a = printf("1- star test %.0*.d\n",5, 10);
	int b = ft_printf("2- star test %.0*.d\n",5, 10);
	ft_printf("a = %d, b = %d\n", a, b);
	return (0);
}
