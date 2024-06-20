#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void	ft_csp(char ch, va_list args, int *count)
{
	long	lvarg;
	char	charc;
	char	*str;

	if (ch == 's')
		*count += ft_putstr_fd_count(va_arg(args, char *), 1);
	else if (ch == 'c')
	{
		charc = (char)va_arg(args, int);
		*count += 1;
		write(1, &charc, 1);
	}
	else if (ch == 'p')
	{
		lvarg = va_arg(args, unsigned long long);
		if (lvarg == 0)
		{
			*count += ft_putstr_fd_count("(nil)", 1);
			return ;
		}
		write(1, "0x", 2);
		str = ft_detohe_long(lvarg);
		*count += ft_putstr_fd_count_free(str, 1) + 2;
	}
}

static void	ft_diu(char ch, va_list args, int *count)
{
	int	unint;

	if (ch == 'u')
	{
		unint = va_arg(args, unsigned int);
		*count += ft_putstr_fd_count_free(ft_itoa_unsigned(unint), 1);
	}
	else
	{
		*count += ft_putstr_fd_count_free(ft_itoa(va_arg(args, long)), 1);
	}
}

static void	ft_xxperc(char ch, va_list args, int *count)
{
	char	*str;
	int		i;

	if (ch == 'x')
	{
		str = ft_detohe(va_arg(args, long));
	}
	else if (ch == 'X')
	{
		str = ft_detohe(va_arg(args, long));
		i = -1;
		while (str[++i])
			str[i] = ft_toupper(str[i]);
	}
	else if (ch == '%')
	{
		*count += 1;
		write(1, "%", 1);
		return ;
	}
	*count += ft_putstr_fd_count_free(str, 1);
}

int	count_plus_write(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf(const char *s, ...)
{
	size_t	i;
	va_list	args;
	int		count;

	i = -1;
	count = 0;
	va_start(args, s);
	while (s[++i])
	{
		if (s[i] == '%' && ((i + 1) < ft_strlen(s) && ((s[i + 1] == 's'
						|| s[i + 1] == 'c' || s[i + 1] == 'p'))))
			ft_csp(s[(i++) + 1], args, &count);
		else if (s[i] == '%' && ((i + 1) < ft_strlen(s) && ((s[i + 1] == 'd'
						|| s[i + 1] == 'i' || s[i + 1] == 'u'))))
			ft_diu(s[(i++) + 1], args, &count);
		else if (s[i] == '%' && ((i + 1) < ft_strlen(s) && ((s[i + 1] == 'x'
						|| s[i + 1] == 'X' || s[i + 1] == '%'))))
			ft_xxperc(s[(i++) + 1], args, &count);
		else
			count += count_plus_write(s[i]);
	}
	va_end(args);
	return (count);
}
