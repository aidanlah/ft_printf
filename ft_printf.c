#include "ft_printf.h"

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
			//print special
		}
		else
		{
			//print normally.
		}
		i ++;
	}
	va_end(args);
	return len;
}