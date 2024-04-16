#include <stdio.h>
#include <stdlib.h>

char  *reverse_in_place(char *str, int neg, int len)
{
    int i;
    char  temp;

    i = 0;
    if (str[i] == '-')
    {
        i++;
    }
    else
        len--;
    while (i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
}

char  *populate_array(long long int n, int len, char *str, int neg)
{
    int i;

    i = 0;
    if (neg == 1)
    {
        str[i] = '-';
        i++;
    }
    while (n > 0)
    {
        str[i] = (n % 10) + '0';
        n /= 10;
        i++;
    }
    str[i] = 0;
    return (reverse_in_place(str, neg, len));
}

char  *ft_itoa(int n)
{
    long long int tempn;
    int len;
    char *str;
    int neg;
    long long int finaln;

    tempn = n;
    len = 0;
    neg = 0;
    if (tempn < 0)
    {
        tempn *= -1;
        neg = 1;
    }
    finaln = tempn;
    while (tempn > 0)
        tempn /= 10 + (len++ - len);
    str = (char *)malloc((len + neg + 1) * sizeof(char));
    if (!str)
        return (NULL);
    return (populate_array(finaln, len, str, neg));
}

/* int main(void) */
/* { */
/*     printf("%s\n", ft_itoa(-2147483648)); */
/*     return (0); */
/* } */
