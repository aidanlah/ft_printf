#include "ft_printf.h"

static int	num_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (len > 0)
	{
		num[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (num);
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_uitoa(n);
	len += ft_print_str(str);
	free(str);
	return (len);
}