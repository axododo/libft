#ifndef LIBFT_H
# define LIBFT_H
#include <bsd/string.h>
# include "ctype.h"
# include <stddef.h> // pour size_t
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strrchr(const char *s, int c);
int ft_memcmp(const void *s1, const void *s2, size_t n);

char *ft_substr(char const *s, unsigned int start, size_t len);
#endif
