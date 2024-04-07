#include <stdio.h>
#include "ft_printf.h"


int main()
{
	char	c = 'c';
	char	*yes;
	int len;
	int i;

	yes = &c;
	len = ft_printf("This is %x\n", yes);
	ft_printf("This is %X\n", yes);
	i = printf("This is %x\n", yes);
	printf("This is %X\n", yes);

	printf("ft_printf: %d\n", len);
	printf("printf: %d\n", i);
}