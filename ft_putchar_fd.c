#include <unistd.h>

void  ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/* int main(void) */
/* { */
/*     ft_putchar_fd('!', 2); */
/*     ft_putchar_fd('\n', 2); */
/*     return (0); */
/* } */
//cc ft_putchar_fd.c -o putchar && ./putchar >stdout.txt 2>stderr.txt
