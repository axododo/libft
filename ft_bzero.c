/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:11:52 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/14 11:11:56 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t				i;
	char unsigned	*str;
	
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	return (s);
}
/*
int	main(void){
	char s[11] = "heo world";
	char c[11] = "hola mundo";
	printf("%s\n", s);
	printf("%s\n", c);
	bzero(s, 2);
	ft_bzero(c, 7);
	printf("%s\n", s);
	printf("%s", c);
}
*/
