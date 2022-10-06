/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:20:30 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 16:34:12 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

//#include<stdlib.h>
//#include<string.h>
//#include<stdio.h>
//// #include<stdio.h>
////#include<string.h>
// int counting(char *s, char c)
// {
//     int i = 0;
//     int cnt = 0;
//     while(s[i])
//     {
//         if(s[i] == c)
//             cnt++;
//         i++;
//     }
//     return cnt;
// }
//char **ft_split(char const *s, char c){
//    char **str; 
//    int i = 0;
//    int j = 0;
//    int nmb = 0;
//    int siz = 0;
//    int m;
//    str = calloc(4 + 2 , sizeof(char  *));
//    while(s[i])
//    {
//        m = i;
//        j = 0;
//        siz = 0;
//        while(s[m] != c && s[m])
//        {
//            siz++;
//            m++;
//        }
//        str[nmb] = calloc(siz + 1,sizeof(char));
//        while(s[i] != c && s[i])
//        {
//          str[nmb][j] = s[i];
//          j++;
//          i++;
//        }
//        i++;
//        nmb++;
//    }
//	return str;
//}
//// str[0]=malloc(20);    
//// str[1]=malloc(20);
//int main(int argc, char const *argv[])
//{
//    char str[] = ""          ", ' '";
//    char *dst = ft_split(str,' ');
//    return 0;
//}