#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_print_str("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_print_char(str[i]);
		i ++;
	}
	return (i);
}