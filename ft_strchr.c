/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:40:05 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:40:07 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)*(s + i) == cc)
		return ((char *)s + i);
	return (NULL);
}
/*
int	main(void)
{
	char  str[11] = "0123456789";
	printf("%s\n", ft_strchr(str, 'f'));
	char  str2[11] = "0123456789";
	printf("%s\n", strchr(str2, 'f'));
	return(0);
}*/
