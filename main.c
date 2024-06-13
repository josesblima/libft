#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str2;
	long	i;

	str = "Hello";
	str2 = "world";
	i = 42;
	ft_printf("\\__My Printf__/\nc = %c\ns = %s\np = %p\n0d - d = %d\n0x - d = %d\n-0d - d = %d\n-0x - d = %d\ni = %i\nu = %u\n0x - x = %x\n-0x - x = %x\nX = %X\n-0X - X = %X\n\n", str[0], str, str, i, i, -1, -1, -1, -1,
		i, -1, i, -1);
	printf("\\__OG Printf__/\nc = %c\ns = %s\np = %p\n0d - d = %d\n0x - d = %d\n-0d - d = %d\n-0x - d = %d\ni = %i\nu = %u\n0x - x = %x\n-0x - x = %x\nX = %X\n-0X - X = %X\n\n", str[0], str, str, i, i, -1, -1, -1, -1,
		i, -1, i, -1);
    ft_printf("\n\n%%hi%%\n");
	return (0);
}
