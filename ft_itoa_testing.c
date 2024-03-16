#include "ft_printf.h"

static	size_t	count_int_len(int n)
{
	size_t	len;

	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len ++;
		n = -n;
	}
	while (n > 9)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*arg;
	unsigned int	num;

	len = count_int_len(n);
	arg = (char *) malloc(sizeof(char) * (len + 1));
	if (!arg)
		return (NULL);
	arg[len] = '\0';
	if (n < 0)
	{
		arg[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		arg[0] = '0';
	while (num != 0)
	{
		arg[len - 1] = (num % 10) + '0';
		num = num / 10;
		len --;
	}
	return (arg);
}
