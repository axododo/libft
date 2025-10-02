void *ft_memset(char *str, int c, int n){
  int i = 0;
  while (str[i] <= n) {
    str[i] = c + 32;
    i++;
  }
  return(str);
}

#include "stdio.h"
#include "string.h"
int main() {
  char *str = "hello world";
  printf("%s\n", ft_memset(str, 7, 7));
  printf("%s\n", memset(str, 5, 0));
  return 0;
}
