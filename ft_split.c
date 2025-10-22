#include <stdio.h>
#include <stdlib.h>

char	**ft_split(const char *s, char c)
{
	char	**str1;
	int		i;
	int		j;
	int		k;

	str1 = malloc(sizeof(char *) * 100);
	i = 0;
	j = 0;
	k = 0;
	str1[j] = malloc(54575);
	while (s[i])
	{
		if (s[i] == c)
		{
			str1[j][k] = '\0';
			j++;
			k = 0;
			str1[j] = malloc(54575);
		}
		else
			str1[j][k++] = s[i];
		i++;
	}
	str1[j][k] = '\0';
	return (str1);
}

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
  tab = ft_split("lorem ipsum dolore", ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
}
