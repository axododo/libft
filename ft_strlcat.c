/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <mguilber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:41:01 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/16 18:33:03 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
  int len;
  int i;
  int j;

  len = 0;
  i = 0;
  j = 0;
  while (dst[i])
  {
    i++;
  }
  while (src[j])
  {
    j++;
  }
  if (size <= i)
    return(size + j);
  while (src[len] && i + len < size - 1)
  {
    dst[i + len] = src[len];
    len++;
  }
   dst[i + len] = '\0';
   return(i + len);
}
/*
int main() {
  char dest[3] = "hel";
  char src[15] = " world";
  char dest1[3] = "hel";
  char src1[15] = " world";
  printf("ft _ > %zu\n", ft_strlcat(dest, src, 2));
  printf("ft -> %s\n", dest);
  printf("tr _ > %zu\n", strlcat(dest1, src1, 2));

  printf("tr -> %s\n", dest1);
  return 0;
}
*/
