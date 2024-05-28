/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:39:14 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:39:15 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if ((int)n == 0)
		return (0);
	while (str1[i] == str2[i] && i < (int)n)
	{
		i++;
	}
	if (i == (int)n)
	{
		return (0);
	}
	return (str1[i] - str2[i]);
}

/* int main(void) */
/* { */
/*     printf("%d\n", ft_memcmp("", "", 10)); */
/*     return (0); */
/* } */
