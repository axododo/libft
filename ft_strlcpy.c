#include "string.h"
#include "stdio.h"
size_t  ft_strlcpy(char *dst, const char *src, size_t size){

  int i;
  int len = 0;

  i = 0;
  while(src[len]){
    len++;
  }
  if (size == 0) {
    return (len);
  }
  while (src[i] && i < size - 1) {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return(len);
}

int main() {
  char src[10] = "hello";
  char dest[10];
  char src1[10] = "hello";
  char dest1[10];
  printf("%i\n",ft_strlcpy(dest, src, sizeof(dest)));
  printf("%i\n", strlcpy(dest1, src1, sizeof(dest1)));
  printf("%s\n", dest);
  printf("%s\n", dest1);
  return 0;
}
