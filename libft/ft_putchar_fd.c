/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:39:39 by josde-so          #+#    #+#             */
/*   Updated: 2024/05/28 19:39:41 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void) */
/* { */
/*     ft_putchar_fd('!', 2); */
/*     ft_putchar_fd('\n', 2); */
/*     return (0); */
/* } */
// cc ft_putchar_fd.c -o putchar && ./putchar >stdout.txt 2>stderr.txt
