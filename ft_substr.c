/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:19:40 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 19:29:06 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int        i;
    char    *str;
    int siz;
 
    siz = start;
    i = 0;
    if(!s)
        return (NULL);
    if (start  >= ft_strlen(s))
        return ((char *) ft_calloc(1,sizeof(char)));
    if (ft_strlen(s) <= start + len)
        str = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
    else
        str = malloc(sizeof(char) *(len + 1));
    if (!str)
        return (NULL);
    while (s[i] && start < len + siz)
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}


//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	char str[] = "lorem ipsum dolor sit amet";
//	char *dst = ft_substr(str,7,10);
//	printf("%s",dst);
//	return 0;
//}
