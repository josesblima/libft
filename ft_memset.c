/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:39:32 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:39:33 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *buffer, int c, size_t len)
{
	int				i;
	unsigned char	*buff;

	i = 0;
	buff = (unsigned char *)buffer;
	while (i < (int)len)
	{
		buff[i] = c;
		i++;
	}
	return (buffer);
}
/*
int	main(void)
{
	char  str[11];

	strcpy(str, "1234567890");
	ft_memset(str, 48, 3);
	printf("%s\n", str);
	return (0);
}*/
