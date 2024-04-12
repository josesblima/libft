#include <stdio.h>
#include <bsd/string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t  src_len;
    size_t  j;
    size_t  i;

    dst_len = 0;
    j = 0;
    src_len = 0;
    while (dst[dst_len])
        dst_len++;
    while (src[src_len])
        src_len++;
    if (dst_len >= size)
        return (dst_len + src_len);
    i = dst_len;
    while (src[j] && i < size - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = 0;
    return (src_len + dst_len);
}
/*
int main(void)
{
    char  dst[11] = "0123456789";
    char  src[11] = "qwertyuiop";
    printf("ft = %zu\n", ft_strlcat(dst, src, 11));
    printf("%s\n", dst);

    char  dst2[11] = "0123456789";
    char  src2[11] = "qwertyuiop";
    printf("strlcat = %zu\n", strlcat(dst2, src2, 11));
    printf("%s\n", dst2);
    return (0);
}*/
