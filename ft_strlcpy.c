#include "libft.h"
#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (i < size - 1 && dst[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    while (src[i])
        i++;
    return (i);
}
