/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:37:12 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/22 14:37:15 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
  int i = 0;
  char *str;

  str = malloc(sizeof(char *) * sizeof(*s));
  if(!str)
    return(NULL);
  if(s[0] == '\0'){
    return(str);
  }
  while (s[i]) {
    str[i] = s[i];
    i++;
  }
  return(str);
}
