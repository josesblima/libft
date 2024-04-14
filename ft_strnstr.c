#include <stdio.h>
/* #include <bsd/string.h> */

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    int    i;
    int    j;
    size_t    findlen;

    i = 0;
    j = 0;
    findlen = 0;
    while (little[findlen])
        findlen++;
    while (big[i] != '\0' && i < len - findlen)
    {
        while (big[i + j] == little[j] && little[j] != '\0' && i < len - findlen)
        {
            j++;
        }
        if (j == findlen)
            return ((char *)&(big[i]));
        j = 0;
        i++;
    }
    return (0);
}

/* int main(void) */
/* { */
/*     printf("%s\n", ft_strnstr("0123456789", "23", 3)); */
/*     printf("%s\n", strnstr("0123456789", "23", 3)); */
/*     return (0); */
/* } */
