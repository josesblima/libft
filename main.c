#include <stdio.h>
#include "libftprintf.h"
#include <stdarg.h>

int	main(void)
{
	char	*str;
	char	*str2;
    long i;

	// ft_printf("test %d\n", n);
	str = "Hello";
	str2 = "world";
    i = 42;
	ft_printf("\nMY PRINTF\nd: %d\nu: %u\ns: %s\nc: %c\np: %p\nx: %x\nx hexa: %x\nX Hexa: %X\n\n", 0x2a, -1, str, str[0], str, 42, 0x2a, 0x2a);
	printf("TRUE PRINTF:\nd: %d\nu: %u\ns: %s\nc: %c\np: %p\nx: %x\nx hexa: %x\nX Hexa: %X\n\n", 0x2a, -1, str, str[0], str, 42, 0x2a, 0x2a);
    printf("\nTESTING\nu: %u\n", -1);
    ft_printf("\nMY TEST\nd: %d\nx nega: %x", -0x2a, -0x2a);
    printf("\nTEST\nd: %d\nx nega: %x", -0x2a, -0x2a);
	return (0);
}
// cc -o ft_printf ft_printf.c -L. -lft && ./ft_printf
// 1,2,3,4,5,6,7,8,9,a,b,c,d,e,f,10,11,12,13,14,15,16,17,18,19,1a,1b,1c,1d,1e,1f,20

