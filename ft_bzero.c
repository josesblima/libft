/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:33:58 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:34:13 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *buffer, size_t len)
{
	int				i;
	unsigned char	*buff;

	i = 0;
	buff = (unsigned char *)buffer;
	while (i < (int)len)
	{
		buff[i] = 0;
		i++;
	}
	return (buffer);
}
/*
int	main(void)
{
	char  str[11];
	char  *str2;

	strcpy(str, "1234567890");
	str2 = str + 3;
	ft_bzero(str2, 3);
	printf("str = %s\n", str);
	return (0);
}*/
