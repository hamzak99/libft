/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:19:54 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 18:21:08 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	m;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0 || haystack == needle)
		return ((char *)haystack);
	if(len == 0 )
		return (0);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			m = i;
			while (needle[j] == haystack[m] && m < len)
			{
				j++;
				m++;
			}
			if (ft_strlen(needle) == j)
				return ((char *)haystack + i);
			j = 0;
		}
		i++;
	}
	return ((void*)0);
}
//#include<stdio.h>
//int main()
//{
//    char *largestring = "lorem ipsum dolor sit amet";
//    char *smallstring = "dolor"; 
//    char *str = ft_strnstr(largestring,smallstring,15);
//    printf("%s",str);
//}