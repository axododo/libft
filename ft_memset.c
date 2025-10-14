void *ft_memset(char *str, int c, int n){
  int i = 0;
  while (i <= n) {
    str[i] = c;
    i++;
  }
  return(str);
}

#include "stdio.h"
#include "string.h"
int main() {
  char str[12];
  printf("%s\n", ft_memset(str, 88, 7));
  printf("%s\n", memset(str, 88, 7));
  return 0;
}
