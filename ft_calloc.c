#include <stdlib.h>
#include <stdio.h>

void  *ft_calloc(size_t nmemb, size_t size)
{
    return (malloc(nmemb * size));
}

int main(void)
{
    printf("%p\n", ft_calloc(3, 1));
    return (0);
}
