/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:38:55 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 20:56:59 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(char *big, char *little, size_t len){
	int	i;
	j = 0;
	while(big[i]){
		while(big[i] != little[j]){
			i++;
			while(little[j] == big[i]){
				j++;
				i++;
				if(little[j])
					return(&big[i - j]);
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
/*
int main(){
	printf("%s", ft_strnstr("lorem ipsum dolor", "llorem ispum", 15));
}*/