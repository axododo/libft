/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:55:55 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/28 15:27:34 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlencc(char const *str, char c, int i)
{	int j = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}


size_t countv(char const *str, char c){
	int i = 0;
	int j = 0;
	while(str[i]){
		if (str[i] == c)
			j++;
	i++;
 }
 return(j);
}

char	**ft_split(const char *s, char c)
{
	char	**str1;
	int		i;
	int		j;
	int		k;

	
	i = 0;
	j = 0;
	k = 0;

	if ( ft_strlen(s) == countv((const char *)s, c))
		return(0);
	str1 = malloc(sizeof(char *) * countv(s, c) + 1);
	if(!str1)
		return(0);
	str1[j] = malloc(sizeof(char *) * ft_strlencc(s, c, i));
	while (s[i])
	{
		if (s[i] == c && s[i] != '\0')
		{
			str1[j][k] = '\0';
			j++;
			k = 0;
			str1[j] = malloc(sizeof(char *) * ft_strlencc(s, c, i));
		}
		else
			str1[j][k++] = s[i];
		i++;
	}
	str1[j][k] = '\0';
	str1[j + 1]= NULL;
	return (str1);
}

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
  tab = ft_split("           ", ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
}
