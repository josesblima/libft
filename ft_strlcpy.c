#include "libft.h"
#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    int   srclen;

    i = 0;
    srclen = 0;
    while (src[srclen])
        srclen++;
    if (size == 0)
        return (srclen);
    while (i < size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (srclen);
}
