#include <stdio.h>
#include <stdlib.h>

static int	split_len(char const *s, char c)
{
	int	res;
	int	j;

	res = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] != c)
		{
			j++;
		}
		if (j > 0 && s[j - 1] != c && (s[j] == c || s[j] == 0))
			res++;
		if (s[j])
			j++;
	}
	return (res);
}

static int	str_len_c(char const *s, char c, int pos)
{
	int	init_pos;

	init_pos = pos;
	while (s[pos] && s[pos] != c)
		pos++;
	return (pos - init_pos);
}

static char	**populate_array(char **arr, char const *s, char c, int pos)
{
	int	i;
	int	j;

	i = 0;
	while (s[pos])
	{
		if (s[pos] != c)
		{
			arr[i] = (char *)malloc((str_len_c(s, c, pos) + 1) * sizeof(char));
			j = 0;
			while (s[pos] && s[pos] != c)
			{
				arr[i][j++] = s[pos++];
			}
			arr[i][j] = 0;
			i++;
		}
		else
			pos++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		pos;

	pos = 0;
	arr = malloc((split_len(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (populate_array(arr, s, c, pos));
}
//
// int main(void)
// {
//     int i;
//
//     i = 0;
//     printf("main\n");
//     char  **arr = ft_split("  one two    three    ", ' ');
//     while (arr[i])
//     {
//         printf("%s\n", arr[i]);
//         i++;
//     }
//     return (0);
// }
