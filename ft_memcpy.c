/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:13:55 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/14 11:13:57 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n){
	int i;
	int j;
	unsigned char *des;
	unsigned char *sr;

	i = 0;
	j = n;
	des = (unsigned char*)dest;
	sr = (unsigned char*)src;

	while(i < j){
		des[i] = sr[i];
		i++;
	}
	return(des);
}
/*
int main(){
	char src[12] = "hello zorld";
	memcpy(&src[3], &src[4], 5);
	printf("%s\n", src);
	ft_memcpy(&src[3], &src[4], 5);
	printf("%s\n", src);
}
*/
