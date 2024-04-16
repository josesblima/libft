#include <stdlib.h>
#include <stdio.h>

int split_len(char const *s, char c)
{
    int res;
    int j;

    res = 0;
    j = 0;
    while (s[j])
    {
        if (s[j] == c)
        {
            res++;
            while (s[j++] == c);
        }
        else
            j++;
    }
    if (s[--j] == c)
        return (res);
    return (res + 1);
}

char **populate_array(char **arr, char const *s, char c, int i, int r, int l)
{
    int j;

    while (s[l])
    {
        if (s[r] == c && r == l)
            j += r++ - l++;
        else if (s[r] == c && r > 0)
        {
            arr[i] = (char *)malloc((r - l + 1) * sizeof(char));
            if (!arr[i])
                return (NULL);
            i++;
            j = 0;
            while (l < r)
                arr[i - 1][j++] = s[l++];
            arr[i - 1][j] = 0;
            while (l++ == c || r++ == c);
        }
        else
            r++;
    }
    arr[i] = 0;
    return (arr);
}

char **ft_split(char const *s, char c)
{
    int len;
    char  **arr;
    int l;
    int r;
    int i;

    i = 0;
    r = 0;
    l = 0;

    arr = malloc((split_len(s, c) + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    return (populate_array(arr, s, c, i, r, l));
}

/* int main(void) */
/* { */
/*     int i; */

/*     i = 0; */
/*     char  **arr = ft_split(" hi this    doesn't work  h    ", ' '); */
/*     while (arr[i]) */
/*     { */
/*         printf("%s\n", arr[i]); */
/*         i++; */
/*     } */
/*     return (0); */
/* } */
