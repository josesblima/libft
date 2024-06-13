#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

static char	*reverse_in_place2(char *str, long len)
{
	long	i;
	char	temp;

	i = 0;
	if (str[i] == '-')
	{
		i++;
	}
	else
		len--;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

static char	*populate_array2(unsigned int n, long len, char *str)
{
	long	i;

	i = 0;
	while (n > 0)
	{
		if (n % 16 >= 10)
			str[i] = 'a' - 10 + (n % 16);
		else
			str[i] = (n % 16) + '0';
		n /= 16;
		i++;
	}
	str[i] = 0;
	return (reverse_in_place2(str, len));
}

char	*ft_detohe(unsigned int n)
{
	unsigned int	tempn;
	long			len;
	char			*str;
	unsigned int	finaln;

	finaln = n;
	len = 0;
	tempn = (unsigned int)n;
	while (tempn > 0)
	{
		tempn /= 16;
		len++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (populate_array2(finaln, len, str));
}
