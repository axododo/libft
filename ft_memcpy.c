/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:13:55 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 16:08:18 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	int				j;
	unsigned char	*des;
	unsigned char	*sr;

	i = 0;
	j = n;
	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if(!des && !sr)
		return(NULL);
	while (i < j)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
/*
int	main(void){
	char src[12] = "hello zorld";
	memcpy(((void*)0), ((void*)0), 3);
	//printf("%s\n", src);
	//ft_memcpy(((void*)0), ((void*)0), 3);
	//printf("%s\n", src);
}

*/