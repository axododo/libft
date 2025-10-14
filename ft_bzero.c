void *ft_bzero(char *s, int n){
	int i;

	i = 0;
	while(i <= n){
		s[i] = '\0';
		i++;
	}
	return(s);
}
#include <stdio.h>
#include <string.h>
int main(){
	char s[11] = "hello world";
	char c[11] = "hola mundo";
	printf("%s\n", s);
	printf("%s\n", c);
	bzero(s, 2);
	ft_bzero(c, 7);
	printf("%s\n", s);
	printf("%s", c);
}
