#include <stdio.h>

/* void ft_toupper(unsigned int c, char *s) */
/* { */
/*     if (s[c] >= 'a' && s[c] <= 'z') */
/*         s[c] = s[c] - ('a' - 'A'); */
/* } */

char  *ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i, s);
        i++;
    }
    return (s);
}

/* int main(void) */
/* { */
/*     char str[6] = "this was lowercase"; */
/*     printf("%s\n", ft_striteri(str, ft_toupper)); */
/*     return (0); */
/* } */
