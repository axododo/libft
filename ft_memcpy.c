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

void *ft_memcpy(void *dest, const void *src, int n){
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
	char src[12] = "h-e-l-l-o";
	char dest[12] = "fhsdhf";
	char dddd[12] = "";
	memcpy(&src[3], &src[4], 9);
	printf("%s\n", src);
	ft_memcpy(dddd, src, 2);
	printf("%s\n", dddd);
}
