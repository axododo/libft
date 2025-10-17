/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:36 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/16 15:22:38 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				x;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	x = 0;
	
	while ((str1[i] && str2[i] && (str1[i] == str2[i])) && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	x = str1[i] - str2[i];
	return (x);
}
/*
int main(){
	printf("%i\n", ft_strncmp("xbcdef", "xbc\375xx", 5));
	printf("%i", strncmp("xbcdef", "xbc\375xx", 5));
}
*/
