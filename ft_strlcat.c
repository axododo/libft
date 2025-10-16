#include "string.h"
#include "stdio.h"

size_t ft_strlcat(char *dst, const char *src, size_t size){
  int len = 0;
  int i = 0;
  int j = 0;

  while (dst[i]) {
    i++;
  }
  while (src[j]) {
    j++;
  }
  if (size <= i)
    return(size + j);
  while (src[len] && i + len < size - 1) {
    dst[i + len] = src[len];
    len++;
   }
   dst[i + len] = '\0';
   return(i + len);
}

int main() {
  char dest[15] = "hello";
  char src[15] = " world";
  char dest1[15] = "hello";
  char src1[15] = " world";
  printf("ft _ > %i\n", ft_strlcat(dest, src, 2));
  printf("ft -> %s\n", dest);
  printf("tr _ > %i\n", strlcat(dest1, src1, 2));

  printf("tr -> %s\n", dest1);
  return 0;
}
