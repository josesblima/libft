#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *d;
    unsigned const char *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
/*
int main(void)
{
    char  dest[11] = "0123456789";
    char  src[11] = "qwertyuiop";

    ft_memcpy(dest, src, sizeof(char) * 3);
    printf("dest = %s\n", dest);
    return (0);
}*/
