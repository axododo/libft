/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:27:33 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 16:59:03 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int	sii;

	sii = n;
	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
		return (NULL);
}
/*
int	main(void){
	char s[12] = "lorem ipsum";
	char s1[12] = "lorem ipsum";

	printf("%c\n", ft_memchr(s, 'l', 10));
	printf("%c\n", memchr(s1, 'l', 10));

}

*/