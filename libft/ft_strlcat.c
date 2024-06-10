/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:40:27 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:40:29 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// #include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len >= size)
		return (size + src_len);
	while (src[i] && i + dst_len < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}
//
// int main(void)
// {
//     char  dst[11] = "0123456789";
//     char  src[11] = "qwertyuiop";
//     printf("ft = %zu\n", ft_strlcat(dst, src, 11));
//     printf("%s\n", dst);
//
//     char  dst2[11] = "0123456789";
//     char  src2[11] = "qwertyuiop";
//     printf("strlcat = %zu\n", strlcat(dst2, src2, 11));
//     printf("%s\n", dst2);
//     return (0);
// }
