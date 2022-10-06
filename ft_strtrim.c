/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:19:44 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 20:08:26 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"
//first part complete but search from end stiil not complited
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char *ft_strtrim(char const *s1, char const *set)
{
    size_t    strt;
    size_t    end;
    size_t    i;
    char    *ss;
    
    end = ft_strlen(s1) - 1;
    strt = 0;
    i = 0;
    if(!s1 && !set)
        return ((char *)(ft_calloc(1,1)));
    while (ft_strchr(set , s1[strt]) && s1[strt])
        strt++;
    while (ft_strrchr(set , s1[end]) && end > 0)
        end--;
    if(end <= strt)
        return (char *)(s1 + strt);
    ss = ft_calloc((end - strt) + 2, sizeof(char));
    if(!ss)
        return (NULL);
    while (strt <= end)
    {
        ss[i++] = s1[strt++];
        //i++;
        //strt++;
    }
    return (ss);
}
//int main()
//{
//    char s1[] = "  \t \t \n   \n\n\n\t";
//    printf("%s", ft_strtrim(s1, ""));
//    return 0;
//}