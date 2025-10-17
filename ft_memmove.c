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

#include "libft.h"

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*des;
	const unsigned char	*sr;

	if (!dest && !src)
		return (NULL);

	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;

	if (des > sr)
	{
		// Copier en arrière pour éviter l'écrasement
		i = n;
		while (i > 0)
		{
			i--;
			des[i] = sr[i];
		}
	}
	else
	{
		// Copier en avant
		i = 0;
		while (i < n)
		{
			des[i] = sr[i];
			i++;
		}
	}
	return (dest);
}


/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*sr;
	unsigned char	*des;

	i = 0;
	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (i < n)
	{
		if (des > sr)
		{
			i--;
			des[i] = sr[i];
		}
		else
			des[i] = sr[i];
		i++;
	}
	return (des);
}
*/
/*
int	main(void){
	printf("ft_memmove\n");
		unsigned char tab[] = "hejhgsdajgjgsdakgsdall";
		unsigned char dest = tab[1];
		unsigned char src = tab[5];
		size_t size = 12;
		ft_memmove(&dest, &src, size);
		printf("%s\n", &tab[0]);

		printf("memmove\n");
		unsigned char tab1[] = "hello";
		unsigned char dest1 = tab1[3];
		unsigned char src1 = tab1[1];
		ft_memmove(&dest1, &src1, size);
		printf("%s\n", &tab[0]);
}
*/
