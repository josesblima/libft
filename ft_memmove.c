#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned const char *s;
    unsigned char *temp;
    int i;

    d = (unsigned char *)dest;
    s = (unsigned const char *)src;
    i = 0;
    if (dest > src)
    {
        while (n > 0)
        {
            d[n] = s[n];
            n--;
        }
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}

int main(void)
{
    char dest[11] = "0123456789";
    char *src = dest + 3);

    ft_memmove(dest, &src, 5);
    printf("dest = %s\n", dest);
    return (0);
}
