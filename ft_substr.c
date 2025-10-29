/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:36:02 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/29 16:48:40 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	max;
	char	*str;
	size_t	j;

	if (!s) return (NULL);
	max = ft_strlen(s) - start;
	if (start > ft_strlen(s))
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (max > len)
	{
		max = len;
	}
	str = malloc(sizeof(char) * (max + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (j < max)
	{
		str[j] = s[start];
		start++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(void) {
		printf("%s", ft_substr("lorem ipsum dolor" , 7, 10));

}*/