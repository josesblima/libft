#include <unistd.h>

void  ft_putnbr_fd(int n, int fd)
{
    char  c;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    c = (n % 10) + '0';
    write(fd, &c, fd);
}

/* int main(void) */
/* { */
/*     ft_putnbr_fd(2147483647, 2); */
/*     write(2, "\n", 1); */
/*     ft_putnbr_fd(-2147483648, 2); */
/*     write(2, "\n", 1); */
/*     return (0); */
/* } */