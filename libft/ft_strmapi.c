/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:40:43 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:40:44 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* char ft_toupper(unsigned int c, char s) */
/* { */
/*     if (s >= 'a' && s <= 'z') */
/*         return (s - ('a' - 'A')); */
/*     return (s); */
/* } */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

/* int main(void) */
/* { */
/*     char str[6] = "hello"; */
/*     printf("%s\n", ft_strmapi(str, &ft_toupper)); */
/*     return (0); */
/* } */
