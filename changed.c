void	ft_padding(t_conv *type, char *str, t_type var)
{
	char	*strp;
	char	add;
	int	len;
	char	*tmp;

	len = /*(type->p && var.sign < 0) ? ft_strlen_err(str) + 1 : */ft_strlen_err(str);
	if (type->padding > type->precision && type->padding > len)
	{
		if (type->precision == -1) // No precision with the padding
		{
			tmp = str;
			type->padding -= len;
			add = (type->z != 0 && type->m == 0) ? '0' : ' ';
			str = (var.nbr < 0) ? ft_strsub(str, 1, len) : str;
			(var.nbr < 0) ? free(tmp) : 0;
		}
		else // Precision
		{
			add = ' ';
			type->padding -= (type->precision < len) ? len : type->precision;
		}
		strp = ft_str_putchar(add, type->padding);
		if (var.sign && add == ' ') // if there is sign with spaces
		{
			ft_putstr(strp);
			ft_putchar(var.sign);
			ft_putstr(str);
			free(str);
			free(strp);
		}
		else if (add != ' ')
		{
			ft_putchar(var.sign);
			ft_putrev_str(str, strp, type);
		}
	}
	else
	{
		(var.sign) ? ft_putchar(var.sign) : 0;
		(type->s && !type->p) ? ft_putchar(' ') : 0;
		ft_putstr(str);
	}
}

void	convert_int(t_type var, t_conv *type)
{
	char	*str;
	char	*tmp;
	char	*tmp1;
	int	len;

	len = ft_nb_len(ft_abs(var.nbr), 10);
	str = ft_itoa(var.nbr);
	if (var.nbr < 0)
		var.sign = '-';
	else
		var.sign = (type->p) ? '+' : 0;
	if (type->precision > len)
	{
		tmp1 = str;
		tmp = ft_str_putchar('0', (type->precision - len));
		str = (var.nbr < 0) ? ft_strjoin(tmp, str + 1) :
		ft_strjoin(tmp, str);
		//ft_free(tmp1, tmp);
	}
//	else
//		var.sign = (var.nbr < 0) ? 0 : var.sign;
//	tmp = (var.sign != '0') ? ft_str_putchar(var.sign, 1) : ft_strnew(1);
//	str = (var.sign != '0') ? ft_strjoin(tmp, str) : str;
//	free(tmp);
	ft_padding(type, str, var);
}