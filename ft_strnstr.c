/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:38:55 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 19:27:57 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(char *big, char *little, size_t len){
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(big[i] && i < len){
		
		while(little[j] == big[i]){
			j++;
			i++;
			if(little[j])
				return(&big[i - j]);
			j = 0;
			i++;
			}
			
	i++;
	}
	return (0);
}
/*
int main(){
	printf("%s", ft_strnstr("lorem ipum dolor", "ipsum", 5));
}
	*/