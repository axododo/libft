/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:55:36 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/16 14:55:38 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[j])
	{
		j++;
	}
	while (s[i] != c && i <= j)
	{
		i++;
	}
	if (s[i] == c)
		return (&((char *)s)[i]);
	else
		return (NULL);
}
/*
int	main(void){
	printf("%s", ft_strchr("helloo", 'a'));
	printf("%s", strchr("helloo", 'a'));
}
*/
