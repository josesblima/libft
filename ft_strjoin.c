#include <stdlib.h>
#include <stdio.h>

char  *ft_strjoin(char const *s1, char const *s2)
{
    int len1;
    int len2;
    char *res;

    len1 = 0;
    len2 = 0;
    if (!s1 || !s2)
        return (NULL);
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;
    res = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (!res)
        return (NULL);
    len1 = 0;
    len2 = 0;
    while (s1[len1])
    {
        res[len1] = s1[len1];
        len1++;
    }
    while (s2[len2])
        res[len1++] = s2[len2++];
    res[len1] = 0;
    return (res);
}

/* int main(void) */
/* { */
/*     printf("%s\n", ft_strjoin("Hello ", " world!")); */
/*     printf("%s\n", ft_strjoin("", "")); */
/*     return (0); */
/* } */
