/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:36:58 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 15:41:11 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i = 0, j;

	i = 0, j = 0, start;
	i = 0, j = 0, start = -1;
	if (!s)
		return (NULL);
	res = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i] == c)
				res[j++] = word_dup(s, start, i);
			else
				res[j++] = word_dup(s, start, i + 1);
			start = -1;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
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
		free(tab[i]);
		i++;
	}
	free(tab);
}
