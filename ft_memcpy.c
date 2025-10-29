/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:13:55 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/29 17:07:31 by mguilber         ###   ########.fr       */
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
	while (i < j)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
