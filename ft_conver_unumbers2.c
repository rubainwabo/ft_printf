#include "libftprintf.h"

void	ft_fetch_arg3(t_conv *type, va_list arg)
{
	uintmax_t		val;
    
	if (type->c == 'u')
	{
	 	val = va_arg(arg, unsigned int);
	 	convert_unsigned(val, type, 10);
	}
    else if (type->c == 'x')
    {
        
    }
}