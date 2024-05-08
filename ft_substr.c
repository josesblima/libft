#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *res;
    unsigned int i;

    i = start;
    while (s[i])
        i++;
    res = (char *)malloc((len + 1) * sizeof(char));
    if (!res)
        return (NULL);
    i = 0;
    while (s[start] && i < len)
    {
        res[i] = s[start];
        start++;
        i++;
    }
    res[i] = 0;
    return (res);
}
