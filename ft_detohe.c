#include <stdarg.h>
#include "libft/libft.h"

static char	*reverse_in_place2(char *str, long neg, long len)
{
	long	i;
	char	temp;

	(void)neg;
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

static char	*populate_array2(long n, long len, char *str, long neg)
{
	long	i;

	i = 0;
	if (neg == 1)
	{
		if (n == 0)
		{
			str[i] = '0';
			str[++i] = 0;
			return (str);
		}
		str[i] = '-';
		i++;
	}
	while (n > 0)
	{
		if (n % 16 >= 10)
			str[i] = 'A' - 10 + (n % 16);
		else
			str[i] = (n % 16) + '0';
		n /= 16;
		i++;
	}
	str[i] = 0;
	return (reverse_in_place2(str, neg, len));
}

char	*ft_detohe(long n)
{
	long	tempn;
	long	len;
	char	*str;
	long	neg;
	long	finaln;

	tempn = n;
	len = 0;
	neg = 0;
	if (tempn <= 0)
	{
		tempn *= -1;
		neg = 1;
	}
	finaln = tempn;
	while (tempn > 0)
	{
		tempn /= 16;
		len++;
	}
	str = (char *)malloc((len + neg + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (populate_array2(finaln, len, str, neg));
}
