/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:44:41 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/29 17:53:19 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_array_nbr(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 1;
	if (s == 0)
		return (0);
	if (c == 0)
		return (1);
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if ((s[i] != c && s[i - 1] == c) || (i == 0))
			count++;
		i++;
	}
	return (count);
}

size_t	ft_array_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s == c)
		s++;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_str_copy(char const *s, char *str, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	free_memory(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**resu;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	resu = malloc(sizeof(char *) * (ft_array_nbr(s, c) + 1));
	if (!resu)
		return (NULL);
	while (s[i])
	{
		if ((i == 0 && s[0] != c) || (s[i - 1] == c && s[i] != c))
		{
			resu[j] = malloc(ft_array_len(&s[i], c) + 1);
			if (!resu[j])
				free_memory(resu);
			ft_str_copy(&s[i], resu[j], c);
			j++;
		}
		i++;
	}
	resu[j] = NULL;
	return (resu);
}
