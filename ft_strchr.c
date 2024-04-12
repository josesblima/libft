#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *) (s + i));
        i++;
    }
    return (NULL);
}
/*
int main(void)
{
    char  str[11] = "0123456789";
    printf("%s\n", ft_strchr(str, '3'));
    char  str2[11] = "0123456789";
    printf("%s\n", strchr(str2, 'o'));
    return(0);
}*/
