#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str)
	{
		ft_print_str("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_print_char(str[i]);
		i ++;
		len ++;
	}
	return (len);
}