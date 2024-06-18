#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(const char *str_literal, ...);
char	*ft_itoalong(long n);
char	*ft_detohe(long n, int *count);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_detohe_long(long long n);
int	ft_putstr_fd_count(char *s, int fd);

#endif
