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

	int y = 0;
	int *x = &y;

	*x = 45;
//	close(1);
	c_orig = printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	c_my = ft_printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");
	symb_print(c_orig, c_my);

/*	c_orig = printf("This is test string %u\n", -1);
	c_my = ft_printf("This is test string %u\n", -1);

        c_orig = printf("This is NULL pointer %p\n", x);
        c_my = ft_printf("This is NULL pointer %p\n", x);

        printf("\n");
        symb_print(c_orig, c_my);


	printf("\n");
	symb_print(c_orig, c_my);

	c_orig = printf("This is test pointer %p\n", x);
	c_my = ft_printf("This is test pointer %p\n", x);

	printf("\n");
	symb_print(c_orig, c_my);

	x = NULL;
	c_orig = printf("This is NULL pointer %p\n", x);
	c_my = ft_printf("This is NULL pointer %p\n", x);

	printf("\n");
	symb_print(c_orig, c_my);
	*/

	return (0);
}
