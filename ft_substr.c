/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:36:02 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/29 18:06:09 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s) - start;
	if (size > len)
		size = len;
	if (start >= ft_strlen(s))
	{
		dest = malloc(sizeof(char));
		if (!dest)
			return (0);
		dest[0] = 0;
		return (dest);
	}
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (0);
	ft_strlcpy(dest, &s[start], (size + 1));
	return (dest);
}
