#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_csp(char ch, va_list args)
{
	long	lvarg;
	char	charc;

	if (ch == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (ch == 'c')
	{
		charc = (char)va_arg(args, int);
		write(1, &charc, 1);
	}
	else if (ch == 'p')
	{
		lvarg = va_arg(args, long long);
		write(1, "0x", 2);
		ft_putstr_fd(ft_detohe_long(lvarg), 1);
	}
}

void	ft_diu(char ch, va_list args)
{
	int	unint;

	if (ch == 'u')
	{
		unint = va_arg(args, unsigned int);
		ft_putstr_fd(ft_itoa_unsigned(unint), 1);
	}
	else
	{
		ft_putstr_fd(ft_itoa(va_arg(args, long)), 1);
	}
}

void	ft_xxperc(char ch, va_list args)
{
	char	*str;
	int		i;

	if (ch == 'x')
		str = ft_detohe(va_arg(args, long));
	else if (ch == 'X')
	{
		str = ft_detohe(va_arg(args, long));
		i = -1;
		while (str[++i])
			str[i] = ft_toupper(str[i]);
	}
	else if (ch == '%')
	{
		return ;
	}
	ft_putstr_fd(str, 1);
}

int	ft_printf(const char *str_literal, ...)
{
	size_t	i;
	va_list	args;

	i = 0;
	va_start(args, str_literal);
	while (str_literal[i])
	{
		if (str_literal[i] == '%' && ((i + 1) < ft_strlen(str_literal)
				&& ((str_literal[i + 1] == 's' || str_literal[i + 1] == 'c'
						|| str_literal[i + 1] == 'p'))))
			ft_csp(str_literal[(i++) + 1], args);
		else if (str_literal[i] == '%' && ((i + 1) < ft_strlen(str_literal)
				&& ((str_literal[i + 1] == 'd' || str_literal[i + 1] == 'i'
						|| str_literal[i + 1] == 'u'))))
			ft_diu(str_literal[(i++) + 1], args);
		else if (str_literal[i] == '%' && ((i + 1) < ft_strlen(str_literal)
				&& ((str_literal[i + 1] == 'x' || str_literal[i + 1] == 'X'
						|| str_literal[i + 1] == '%'))))
			ft_xxperc(str_literal[(i++) + 1], args);
		else
			write(1, &str_literal[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}
