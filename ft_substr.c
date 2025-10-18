#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
  int i;
  int max;
  char *str;
  int j;

  i = start;
  max = len;
  str = malloc(max - i);
  j = 0;

  while(i < max){
    str[j] = s[i];
    i++;
    j++;
  }
  str[j] = '\0';
  return (str);
}

int main() {
  printf("%s\n", ft_substr("i just want this part #############", 5, 20));
  return 0;
}
