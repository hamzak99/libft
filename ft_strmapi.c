#include"Libft.h"

//char str(unsigned int n, char s)
//{
//	s = n;
//	return s;

//}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *p ;
	int i;
	
	i = 0;
	p = ft_calloc(ft_strlen(s)+1, 1);
	if(!p)
		return (NULL);
	 
	while (s[i])
	{
		p[i]=f(i, s[i]);
		i++;
	}
	return p;
}

//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//    char s[] = "hello cc";
//    ft_strmapi(s, str);
//    printf("%s",s);
//    return 0;
//}
