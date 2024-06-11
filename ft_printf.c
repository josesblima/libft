#include "libft/libft.h"
#include "libftprintf.h"
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
		lvarg = va_arg(args, long);
		write(1, "0x", 2);
		ft_putstr_fd(ft_detohe(lvarg), 1);
	}
}
// THIS ISN"T WORKING - need to make it so that wraps around on unsigned integers
void	ft_diu(char ch, va_list args)
{
    unsigned int    unint;

	if (ch == 'u')
    {
        unint = va_arg(args, unsigned int);
        printf("\nitwenthere\n");
		ft_putstr_fd(ft_itoa(unint), 1);
    }
    else
    {
		ft_putstr_fd(ft_itoa(va_arg(args, long)), 1);
    }
}
void	ft_xXperc(char ch, va_list args)
{
	char	*str;
	int		i;
	// int		j;
	// char	cur_char;
	// int		temp_res;
	// char	res[9999];

	if (ch == 'x')
		str = ft_detohe(va_arg(args, long));
    else if (ch == 'X')
    {
		str = ft_detohe(va_arg(args, long));
        i = -1;
        while (str[++i])
            str[i] = ft_toupper(str[i]);
    }
    ft_putstr_fd(str, 1);
	/*char	*str;
	if (!ch)
	{
		return ;
	}
	i = 0;
	str = ft_itoalong(va_arg(args, long));
	while (str[i])
	{
		j = 0;
		cur_char = str[i];
		if (cur_char > '9')
			cur_char = 'a' - 10 + cur_char;
		temp_res = 0;
		while (j < str[i] - 1)
		{
			temp_res += (cur_char * cur_char) * (str[i] - 1);
			j++;
		}
		res[i] = temp_res;
		i++;
	}
	printf("\nafter tempres: %s\n", res);
	ft_putstr_fd(res, 1);
	printf("\nafter after tempres\n");
	*/
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
			ft_xXperc(str_literal[(i++) + 1], args);
		else
			write(1, &str_literal[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}