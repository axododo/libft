/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:41:01 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/29 17:37:22 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	sii;

	sii = size;
	len = 0;
	i = 0;
	j = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (sii <= i)
		return (sii + j);
	while (src[len] && i + len < sii - 1)
	{
		dst[i + len] = src[len];
		len++;
	}
	dst[i + len] = '\0';
	return (i + j);
}
