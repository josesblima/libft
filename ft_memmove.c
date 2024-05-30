/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:39:23 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 20:24:27 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	int					i;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	i = 0;
	if (dest > src)
	{
		n--;
		while ((int)n >= 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
	{
		while (i < (int)n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[11] = "0123456789";
	char *src = dest + 3;

	memmove(dest, src, 5);
	printf("dest = %s\n", dest);

	strcpy(dest, "0123456789");
	src = dest + 3;

	ft_memmove(dest, src, 5);
	printf("dest = %s\n", dest);
	return (0);
}*/
