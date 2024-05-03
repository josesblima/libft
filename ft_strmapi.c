#include <stdio.h>
#include <stdlib.h>

/* char ft_toupper(unsigned int c, char s) */
/* { */
/*     if (s >= 'a' && s <= 'z') */
/*         return (s - ('a' - 'A')); */
/*     return (s); */
/* } */

char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char  *str;

    i = 0;
    while (s[i++]);
    str = (char *)malloc((i + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    return (str);
}

/* int main(void) */
/* { */
/*     char str[6] = "hello"; */
/*     printf("%s\n", ft_strmapi(str, &ft_toupper)); */
/*     return (0); */
/* } */