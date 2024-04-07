#include "ft_printf.h"

static int	format_type(va_list args, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_char(va_arg(args, int));
	else if (c == 's')
		len += ft_print_str(va_arg(args, char *));
	else if (c == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		len += ft_print_nbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		len += ft_print_char('%');
	return (len);
}

// Prints out the string passed in as parameter
// :params: 
// const char *str: pointer to str
// ... : other variables
// :return: Length of string printed.
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;
	
	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += format_type(args, str[i + 1]);
			i ++;
		}
		else
		{
			len += ft_print_char(str[i]);
		}
		i ++;
	}
	va_end(args);
	return (len);
}
