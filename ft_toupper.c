#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
/*
int	main(void)
{
	printf("return (= %d\n", ft_toupper(10)));
	return (0);
}*/
