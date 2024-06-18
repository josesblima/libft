#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_csp(char ch, va_list args, int *count)
{
	long	lvarg;
	char	charc;
	char	*str;

	if (ch == 's')
    {
		*count += ft_putstr_fd_count(va_arg(args, char *), 1);
    }
	else if (ch == 'c')
	{
		charc = (char)va_arg(args, int);
        *count += 1;
		write(1, &charc, 1);
	}
	else if (ch == 'p')
	{
		lvarg = va_arg(args, long long);
		write(1, "0x", 2);
		str = ft_detohe_long(lvarg);
        // printf("\ncount before p = %d", *count);
		*count += ft_putstr_fd_count(str, 1) + 2;
        // printf("\ncount after p = %d", *count);
		free(str);
	}
}

void	ft_diu(char ch, va_list args, int *count)
{
	int	unint;

	if (ch == 'u')
	{
		unint = va_arg(args, unsigned int);
		*count += ft_putstr_fd_count(ft_itoa_unsigned(unint), 1);
	}
	else
	{
        // printf("\ncount before else = %d\n", *count);
		*count += ft_putstr_fd_count(ft_itoa(va_arg(args, long)), 1);
        // printf("\ncount after else = %d\n", *count);
	}
}

void	ft_xxperc(char ch, va_list args, int *count)
{
	char	*str;
	int		i;

	if (ch == 'x')
		str = ft_detohe(va_arg(args, long), count);
	else if (ch == 'X')
	{
		str = ft_detohe(va_arg(args, long), count);
		i = -1;
		while (str[++i])
			str[i] = ft_toupper(str[i]);
	}
	else if (ch == '%')
	{
        *count += 1;
		return ;
	}
	count += ft_putstr_fd_count(str, 1);
}

int	ft_printf(const char *str_literal, ...)
{
	size_t	i;
	va_list	args;
    int count;

	i = 0;
    count = 0;
	va_start(args, str_literal);
	while (str_literal[i])
	{
		if (str_literal[i] == '%' && ((i + 1) < ft_strlen(str_literal)
				&& ((str_literal[i + 1] == 's' || str_literal[i + 1] == 'c'
						|| str_literal[i + 1] == 'p'))))
			ft_csp(str_literal[(i++) + 1], args, &count);
		else if (str_literal[i] == '%' && ((i + 1) < ft_strlen(str_literal)
				&& ((str_literal[i + 1] == 'd' || str_literal[i + 1] == 'i'
						|| str_literal[i + 1] == 'u'))))
			ft_diu(str_literal[(i++) + 1], args, &count);
		else if (str_literal[i] == '%' && ((i + 1) < ft_strlen(str_literal)
				&& ((str_literal[i + 1] == 'x' || str_literal[i + 1] == 'X'
						|| str_literal[i + 1] == '%'))))
			ft_xxperc(str_literal[(i++) + 1], args, &count);
		else
        {
            count++;
			write(1, &str_literal[i], 1);
        }
		i++;
        // printf("\nCOUNT = :%d:", count);
	}
	va_end(args);
	return (count);
}
