/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:37:33 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 14:37:35 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		i;
	int		x;
	int		v;
	char	*str;

	j = 0;
	i = 0;
	x = 0;
	v = 0;
	str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				v++;
			else if (s1[i] != set[j] && v == 0)
			{
				str[x] = s1[i];
			}
			j++;
		}
		if (v == 0)
			x++;
		v = 0;
		j = 0;
		i++;
	}
	str[x] = '\0';
	return (str);
}
/*
int	main(int argc, char const *argv[]) {
  printf("%s\n", ft_strtrim("hello world", "hod"));
  return (0);
}
*/
