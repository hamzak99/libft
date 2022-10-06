#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include<unistd.h>
// Bonus
typedef struct s_list
{
	int *content;
	struct s_list *next;
} t_list;

//first part
int	ft_isalpha(int x);
int	ft_isdigit(int x);
int ft_isalnum(int x);
int ft_isascii(int x);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *s, int c,size_t n);
void	ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memmove(void *str1, const void *str2, size_t n);
int ft_toupper(int ch);
int ft_tolower(int ch);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
size_t	ft_strlcpy(char * dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size); 
//
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
//secend part
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int,char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
#endif