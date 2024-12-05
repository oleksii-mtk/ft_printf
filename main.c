#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void symb_print(int orig, int my)
{
        dprintf(2,"ORIGINAL symbols printed: %d\n", orig);
        dprintf(2,"FT_PRINT symbols printed: %d\n", my);
}

int	main()
{	
	int	c_my;
	int	c_orig;

	
	c_orig = printf("This is test string %d\n", 12);
	c_my = ft_printf("This is test string %d\n", 12);
	printf("\n");
	symb_print(c_orig, c_my);

	c_orig = printf("This is test string %x\n", 255);
	c_my = ft_printf("This is test string %x\n", 255);
	printf("\n");
	symb_print(c_orig, c_my);
	return (0);
}
