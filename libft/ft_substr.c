/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:41:10 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:41:13 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	mall_size;

	i = 0;
	mall_size = len;
	while (s[i])
		i++;
	if (i < start)
		return ((char *)ft_calloc(1 * sizeof(char), 1));
	if (mall_size > i - start)
		mall_size = i - start;
	res = (char *)malloc((mall_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[start] && i < mall_size)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = 0;
	return (res);
}
//
// int main(void)
// {
//     printf("%s\n", ft_substr("tripouille", 1, 11));
//     return (0);
// }
