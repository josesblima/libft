/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:39:45 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:39:46 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/* int main(void) */
/* { */
/*     ft_putendl_fd("This one's fancy too...", 2); */
/*     return (0); */
/* } */
// cc ft_putendl_fd.c -o putendl && ./putendl >stdout.txt 2>stderr.txt
