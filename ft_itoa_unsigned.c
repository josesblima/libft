/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:37:56 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:37:57 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static char	*reverse_in_place(char *str, int neg, int len)
{
	int		i;
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

static char	*populate_array(long long int n, int len, char *str, int neg)
{
	int	i;

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
		str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	str[i] = 0;
	return (reverse_in_place(str, neg, len));
}

char	*ft_itoa_unsigned(unsigned int n)
{
	long long int	tempn;
	int				len;
	char			*str;
	int				neg;
	long long int	finaln;

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
		tempn /= 10;
		len++;
	}
	str = (char *)malloc((len + neg + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (populate_array(finaln, len, str, neg));
}
//
// int main(void)
// {
//      printf("%s\n", ft_itoa(0));
//      return (0);
// }
