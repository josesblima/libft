#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < (int)n)
        i++;
    if (i == (int)n)
        i--;
    return (s1[i] - s2[i]);
}

/* int main(void) */
/* { */
/*     printf("ft_strncmp() = %d\n", ft_strncmp("qwertyu", "qwerytu", 0)); */
/*     return (0); */
/* } */
