#include <stdlib.h>
#include <stdio.h>

void  *ft_calloc(size_t nmemb, size_t size)
{
    char *ptr;
    size_t i;

    ptr = (malloc(nmemb * size));
    i = 0;
    while (i < nmemb * size)
    {
        ptr[i] = 0;
        i++;
    }
    return ((void *) ptr);
}

// int main(void) 
// {
//      printf("%p\n", ft_calloc(3, 1));
//      return (0);
// }
