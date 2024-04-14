#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
    int i;
    long long int res;
    int neg;

    i = 0;
    res = 0;
    neg = 1;
    while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
            || nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
        i++;
    if (nptr[i] == '-')
    {
        neg = -1;
        i++;
    }
    if (nptr[i] < '0' || nptr[i] > '9')
        i++;
    while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
    {
        res *= 10;
        res += nptr[i] - '0';
        i++;
    }
    return (res * neg);
}

/* int main(void) */
/* { */
/*     printf("%d\n", ft_atoi("\t\n\v\f\r -2147483648")); */
/*     printf("%d\n", atoi("\t\n\v\f\r -2147483648")); */
/*     return (0); */
/* } */
