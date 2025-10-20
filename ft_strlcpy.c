/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:41:09 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/20 17:51:35 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	sii;

	sii = size;
	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	if (size == 0)
	{
		return (len);
	}
	while (src[i] && i < sii - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int	main(void) {
  char src[10] = "hello";
  char dest[10];
  char src1[10] = "hello";
  char dest1[10];
  printf("%zu\n",ft_strlcpy(dest, src, 0));
  printf("%zu\n", strlcpy(dest1, src1, 0));
  printf("%s\n", dest);
  printf("%s\n", dest1);
  return (0);
}
*/
