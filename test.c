#include <stdio.h>
#include "ft_printf.h"


int main()
{
	char	*yes;
	
	yes += 10;
	ft_printf("This is %p\n", yes);
	printf("This is %p", yes);
}