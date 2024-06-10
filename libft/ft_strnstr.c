/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:40:50 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:40:53 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	findlen;

	i = 0;
	j = 0;
	findlen = ft_strlen(little);
	if (findlen == 0)
		return ((char *)big);
	if (big == 0)
		i = big[i];
	if (findlen > len)
		return (0);
	while (big[i] != '\0' && i <= len - findlen)
	{
		while (big[i + j] == little[j] && little[j] != '\0' && i <= len
			- findlen)
			j++;
		if (j == findlen)
			return ((char *)&(big[i]));
		j = 0;
		i++;
	}
	return (0);
}
//
// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("0123456789", "23", 3));
// 	// printf("%s\n", strnstr("0123456789", "23", 3));
// 	return (0);
// }
