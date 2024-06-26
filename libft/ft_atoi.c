/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:33:53 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:34:10 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int				i;
	long long int	res;
	int				neg;

	i = 0;
	res = 0;
	neg = 1;
	while (nptr[i] && (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
			|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' '))
		i++;
	if (nptr[i] == '-')
		neg = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		res *= 10;
		res += nptr[i] - '0';
		i++;
	}
	return ((int)(res * neg));
}
//
// int main(void)
// {
//     printf("%d\n", ft_atoi("\t\n\v\f\r -2147483648"));
//     printf("%d\n", atoi("\t\n\v\f\r -2147483648"));
//     return (0);
// }
