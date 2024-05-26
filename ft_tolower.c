#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
/*
int	main(void)
{
	printf("return (= %d\n", ft_tolower(10)));
	return (0);
}*/
