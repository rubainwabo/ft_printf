#include "libftprintf.h"

char	*ft_getFlags(const char restrict *format, va_list arg)
{
	char 	*flag;
	char 	*ptr;
	int 	i;

	if (!(flag = (char*)malloc(sizeof(*flag) * ft_strlen_err(format) + 1)))
		return (NULL);
	ptr = flag;
	while (*format)
	{
		i = 0;
		if (*format != FLAGS[i])
			i++;
		else if (*format == FLAGS[i])
			*(ptr++) = *(format++);
		if (i == ft_strlen_err(FLAGS))
			break;
	}
	*ptr = '\0';
	return (flag);
}

// void 	ft_getConversion(const char restrict *format, va_list arg)
// {
//
// }
