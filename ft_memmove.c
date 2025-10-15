/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:25:21 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/14 19:28:47 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void *ft_memmove(void *dest, const void *src, size_t n){
	size_t i;
	unsigned char *sr;
	unsigned char *des;

	i = 0;
	des = (unsigned char*)dest;
	sr = (unsigned char*)src;
	while (i < n){
	
		if (des > sr){
			des[i + n - 1] = sr[i + n - 1];
		}
		else
			des[i] = sr[i];
		i++;
	}
	return(des);
}



int main(/*int ac, char **av*/){
	printf("ft_memmove\n");
        unsigned char tab[] = "hello";
        unsigned char dest = tab[3];
        unsigned char src = tab[1];
        size_t size = 2;
        ft_memmove(&dest, &src, size);
        printf("%s\n", &tab[0]);
        
        printf("memmove\n");
        unsigned char tab1[] = "hello";
        unsigned char dest1 = tab1[3];
        unsigned char src1 = tab1[1];
        ft_memmove(&dest1, &src1, size);
        printf("%s\n", &tab[0]);
}
