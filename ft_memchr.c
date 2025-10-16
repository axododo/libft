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
void *ft_memchr(const void *s, int c, size_t n){
	int i;

	i = 0;
	while(((char *)s)[i] != c && i <= n){
		i++;
	}
	if (((char *)s)[i] == c)
		return (&((char *)s)[i]);
	else
		return(NULL);
}
/*
int main(){
	char s[12] = "lorem ipsum";
	printf("%uz\n", ft_memchr(s, 'm', 15));
}
*/
