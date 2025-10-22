/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:36:58 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 15:25:23 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int count_letters(char *s){
	int i = 0;
}

int count_words(char *s){
	int i = 0;
	
}

char	**ft_split(const char *s, char c)
{
	char	**str1;
	int		i;
	int		j;
	int		k;

	str1 = malloc(sizeof(char *) * (count_words(s) + 1));
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
	str1[j] = NULL;
	return (str1);
}

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
  tab = ft_split("lorem ipsum dolore", '\0');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
}
