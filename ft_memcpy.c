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
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void *ft_memcpy(void *dest, const void *src, size_t n){
	int i = 0;
	unsigned char *des;
	unsigned char *sr;

	des = (unsigned char*)dest;
	sr = (unsigned char*)src;

	while(i < n){
		des[i] = sr[i];
		i++;
	}
	return(des);
}

int main(){
	char src[12] = "hello zorld";
	char dest[12] = "fhsdhf";
	char dddd[12] = "";
	memcpy(&src[3], &src[4], 5);
	printf("%s\n", src);
	ft_memcpy(&src[3], &src[4], 5);
	printf("%s\n", src);
}
