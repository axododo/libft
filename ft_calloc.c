#include "libft.h"

void *ft_calloc(size_t n, size_t size){
void *p;
  if (n != 0 && size < INT_MAX / n){
    p = malloc(n * size);
    return(NULL);
  }
  p = malloc(n * size);
  if(!p){
    return(NULL);
  }
  else{
    p = malloc(n * size);
    return(p);
  }
}

int main() {
  int size = 8539;

 	void * d1 = ft_calloc(size, sizeof(int));
 	void * d2 = calloc(size, sizeof(int));
/*
  if (memcmp(d1, d2, size * sizeof(int)))
    printf("%i\n", memcmp(d1, d2, size * sizeof(int)));
 	free(d1);
 	free(d2);
  printf("TEST_SUCCESS");
*/
}
