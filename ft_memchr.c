/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:27:33 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/16 15:27:34 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	int	sii;

	sii = n;
	i = 0;
	while (((char *)s)[i] != c && i <= sii)
	{
		i++;
	}
	if (((char *)s)[i] == c)
		return (&((char *)s)[i]);
	else
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
