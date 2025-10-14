/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguilber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:13:05 by mguilber          #+#    #+#             */
/*   Updated: 2025/10/14 11:13:09 by mguilber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *str, int c, int n){
  int i = 0;
  char *st;
  st = (unsigned char*)str;
  while (i < n) {
    st[i] = c;
    i++;
  }
  st[i] = '\0';
  return(st);
}

#include "stdio.h"
#include "string.h"
int main() {
  char str[12];
  char cc[12];
  ft_memset(str, 88 ,7);
  printf("%s\n", str);
  /*printf("%s\n", ft_memset(str, 88, 7));*/
  memset(cc, 88, 7);
  printf("%s\n", cc);
  return 0;
}
