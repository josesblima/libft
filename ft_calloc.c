#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <stdint.h>

void  *ft_calloc(size_t nmemb, size_t size)
{
    char *ptr;

    if (nmemb == 0 || size == 0)
    {
        nmemb = 1;
        size = 1;
    }
    
    if (SIZE_MAX / nmemb < size)  // Check for overflow
        return NULL; // Overflow would occur, return NULL:warn("jk:w");
    ptr = (malloc(nmemb * size));
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}

// int main(void) 
// {
//      printf("%p\n", ft_calloc(3, 1));
//      return (0);
// }
