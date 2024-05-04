#include <stdio.h>
#include <string.h>
void  *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    char *str;

    i = 0;
    str = (char *)s;
    while (i < (int)n)
    {
        if (*(str + i) == c % 256)
            return (str + i);
        i++;
    }
    return (NULL);
}

/* int main(void) */
/* { */
/*     printf("%s\n", (char *)ft_memchr("0123456789", 50, 0)); */
/*     printf("%s\n", (char *)memchr("0123456789", 50, 0)); */
/*     return (0); */
/* } */
