/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:25:21 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/29 17:06:08 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*des;
	const unsigned char	*sr;

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
