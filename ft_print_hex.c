#include "ft_printf.h"

static int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

static void	recur_print_hex(unsigned int num, const char c)
{
	if (num >= 16)
	{
		recur_print_ptr(num / 16, c);
		recur_print_ptr(num % 16, c);
	}
	else
	{
		if (num <= 9)
			ft_print_char(num + '0');
		else
		{
			if (c == 'x')
				ft_print_char(num - 10 + 'a');
			else if (c == 'X')
				ft_print_char(num - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int n, const char c)
{
	int len;

	len = 0;
	if (n == 0)
		return (ft_print_char('0'));
	else
	{
		recur_print_hex(n, c);
		len += ft_hex_len(n);
	}
	return (len);
}
