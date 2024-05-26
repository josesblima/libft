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
