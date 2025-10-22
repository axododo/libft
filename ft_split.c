#include <stdio.h>
#include <stdlib.h>

char **ft_split(const char *s, char c)
{
    char **str1 = malloc(sizeof(char *) * 100);
    int i = 0;
    int j = 0;
    int k = 0;

    str1[j] = malloc(54575);
    while (s[i])
    {
        if (s[i] == c)
        {
            str1[j][k] = '\0';
            j++;
            k = 0;
            str1[j] = malloc(54575);
        }
        else
            str1[j][k++] = s[i];
        i++;
    }
    str1[j][k] = '\0';
    str1[j + 1] = NULL;
    return str1;
}

int main(void)
{
  int i = 0;
    char **tab = ft_split("hello world", ' ');
    while(tab[i]){
        printf("%s\n", tab[i]);
        i++;
      }
    free(tab);
}
