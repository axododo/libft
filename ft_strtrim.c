#include "libft.h"

char *ft_supp(char *str, int i){
  while(str[i]){
    str[i] = str[i +1];
    i++;
  }
}

char *ft_strtrim(char const *s1, char const *set){
  int i = 0;
  int j = 0;
  char *s2;
  s2 = malloc(sizeof(s1));

  while(s1[i]){
    while(set[j]){
      if (s1[i] == set[j]){
        ft_supp()
      }
    }
  }
}
