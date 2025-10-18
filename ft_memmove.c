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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*des;
	const unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	if (des > sr)
	{
		i = n;
		while (i > 0)
		{
			i--;
			des[i] = sr[i];
		}
	}
	else
	{
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
int	main(void){
	printf("ft_memmove\n");
		unsigned char tab[] = "hello";
		unsigned char dest = tab[1];
		unsigned char src = tab[2];
		size_t size = 3;
		ft_memmove(&dest, &src, size);
		printf("%s\n", tab);

		printf("memmove\n");
		unsigned char tab1[] = "hello";
		unsigned char dest1 = tab1[1];
		unsigned char src1 = tab1[2];
		ft_memmove(&dest1, &src1, size);
		printf("%s\n", tab);
}

*/
