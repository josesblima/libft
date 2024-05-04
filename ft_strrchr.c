#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    unsigned char cc;

    i = 0;
    cc = (unsigned char) c;
    while (s[i])
        i++;
    while (i >= 0)
    {
        if (s[i] == cc)
            return ((char *) (s + i));
        i--;
    }
    i++;
    if ((unsigned char)*(s + i) == cc)
        return ((char *)s + i);
    return (NULL);
}
/*
int main(void)
{
    char  str[11] = "0123456789";
    printf("%s\n", ft_strchr(str, '3'));
    char  str2[11] = "0123456789";
    printf("%s\n", strchr(str2, '3'));
    return(0);
}*/
