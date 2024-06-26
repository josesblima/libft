/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:46:57 by josde-so          #+#    #+#             */
/*   Updated: 2024/06/20 20:46:58 by josde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(const char *str_literal, ...);
char	*ft_itoalong(long n);
char	*ft_detohe(long n);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_detohe_long(unsigned long long n);
int		ft_putstr_fd_count(char *s, int fd);
int		ft_putstr_fd_count_free(char *s, int fd);

#endif
