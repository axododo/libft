/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:37:33 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/29 16:55:31 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	st(char *s1, char *set, int i)
{
	int	len;
	int	j;

	len = ft_strlen(set);
	j = 0;
	while (set[j] || j == len + 1)
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	end(char *s1, char *set, int i)
{
	int	len;
	int	im;
	int	j;

	len = ft_strlen(set);
	im = ft_strlen(s1);
	j = 0;
	while ((set[j] || j == len + 1) && im >= i)
	{
		if (s1[im - 1] == set[j])
		{
			im--;
			j = 0;
		}
		else
			j++;
	}
	return (im);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		v;
	int		im;

	i = 0;
	v = 0;
	if (!s1 || !s2) return (NULL); 
	i = st((char *)s1, (char *)set, i);
	im = end((char *)s1, (char *)set, i);
	str = malloc(im - i + 1);
	if (!str)
		return (NULL);
	while (s1[i] && i < im)
	{
		str[v] = s1[i];
		i++;
		v++;
	}
	str[v] = '\0';
	return (str);
}
