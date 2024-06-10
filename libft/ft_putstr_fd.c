/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:39:55 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:39:56 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/* int main(void) */
/* { */
/*     ft_putstr_fd("This is cool!", 2); */
/*     return (0); */
/* } */
// cc ft_putstr_fd.c -o putstr && ./putstr >stdout.txt 2>stderr.txt
