/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:20:43 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 17:52:16 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dest;
	s2 = (char *)src;
	if (!s1 && !s2)
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dest);
}

//#include<string.h>
//#include<stdio.h>
//int main()
//{
//    char str1[] = "Geeksss"; 
//    char str2[] = "Quiz"; 
//    ft_memcpy(str1,str2,strlen(str2));
//    printf("my :%s %s\n", str1, str2);
//	//char s1[] = "Geeksss"; 
//    //char s2[] = "Quiz"; 
//	//memcpy(s1, s2, strlen(s2));
//    //printf("him:%s %s", s1, s2);

//}