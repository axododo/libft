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
#include <stdlib.h>
void *ft_bzero(void *s, size_t n){
	int i;
	char *str;
	i = 0;
	str = (unsigned char*)s;
	while(i <= n){
		str[i] = '\0';
		i++;
	}
	return(s);
}
#include <stdio.h>
#include <string.h>
int main(){
	char s[11] = "hello world";
	char c[11] = "hola mundo";
	printf("%s\n", s);
	printf("%s\n", c);
	bzero(s, 2);
	ft_bzero(c, 7);
	printf("%s\n", s);
	printf("%s", c);
}
