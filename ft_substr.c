#include <stdio.h>
#include <stdlib.h>

int check_set(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
char  *ft_strtrim(char const *s1, char const *set)
{
    int right;
    int left;
    char *res;
    int i;

    right = ft_strlen(s1) - 1;
    left = 0;
    while (s1[left] && check_set(s1[left], set))
        left++;
    printf("left = %d\n", left);
    while (s1[right] && check_set(s1[right], set))
        right--;
    printf("right = %d\n", right);
    res = (char *)malloc((right - left + 1) * sizeof(char));
    if (!res)
        return (NULL);
    i = 0;
    while (left < right)
    {
        res[i] = s1[left];
        left++;
        i++;
    }
    res[i] = 0;
    return (res);
}

int main(void)
{
    printf("%s\n", ft_strtrim("qwer1234567890rewqe", "qwer"));
    return (0);
}
