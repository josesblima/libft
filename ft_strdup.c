#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*res;

	i = 0;
	while (s[i])
		i++;
	res = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

/* int main(void) */
/* { */
/*     printf("%s\n", ft_strdup("copy this")); */
/*     return (0); */
/* } */
