#include "ft_printf.h"
#include <stdlib.h>

int	ft_print_nbr(int n)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(n);
	len += ft_print_str(str);
	free(str);
	return (len);
}
