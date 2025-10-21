#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){
  char *s3;
  int i = 0;
  int j = 0;
  s3 = malloc(sizeof(s1) + sizeof(s2));

  while(s1[i]){
    s3[i] = s1[j];
    i++;
    j++;
  }
  j = 0;
  while(s2[j]){
    s3[i] = s2[j];
    i++;
    j++;
  }
  s3[i] = '\0';
  return (s3);
}
/*
int main() {
  printf("%s", ft_strjoin("hello", "world"));
  return 0;
}
*/
