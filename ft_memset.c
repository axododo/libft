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
#include "libft.h"
void *ft_memset(void *str, int c, size_t n){
  int i;
  int j;

  j = n;
  i = 0;
  char unsigned *st;
  st = (unsigned char*)str;
  while (i < j) {
    st[i] = c;
    i++;
  }
  //st[i] = '\0';
  return(st);
}

/*
int main() {
  char str[12];
  char cc[12];


  memset(cc, 87 ,12);
  printf("ft %s\n", cc);



  ft_memset(str, 88, 12);
  printf("%s\n", str);
  return 0;
}
*/
