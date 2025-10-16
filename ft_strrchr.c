/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:09:15 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/16 15:09:16 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strrchr(const char *s, int c){
	int i;

	i = 0;
	while(s[i]){
		i++;
	}
	while(s[i] != c && i >= 0){
		i--;
	}
	if(s[i] == c)
		return (&((char *)s)[i]);
	else
		return(NULL);
}

int main(){
	printf("%s\n", ft_strrchr("helloo", 'a'));
	printf("%s", strrchr("helloo", 'a'));
}
