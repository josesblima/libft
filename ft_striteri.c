#include <stdio.h>

void  ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (s && f)
    {
        
        i = 0;
        while (s[i])
        {
            f(i, s + i);
            i++;
        }
    }
}
//
// int main(void)
// {
//     char str[6] = "this was lowercase"; 
//     printf("%s\n", ft_striteri(str, ft_toupper));
//     return (0);
// }
