/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:36:02 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 14:36:04 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		max;
	char	*str;
	int		j;

	i = start;
	max = len;
	str = malloc(max - i);
	j = 0;
	while (i < max)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(void) {
  printf("%s\n", ft_substr("i just want this part #############", 5, 20));
  return (0);
}
*/
