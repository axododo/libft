/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:55:36 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 17:05:07 by mguilber         ###   ########.fr       */
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
	while (s[i] != (char)c && i <= j - 1)
	{
		i++;
	}
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	else
		return (NULL);
}
/*
int	main(void){
	printf("%s", ft_strchr("helloo", 'z'));
	printf("%s", strchr("helloo", 'z'));
}
*/
