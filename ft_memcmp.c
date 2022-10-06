/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:20:52 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/02 19:40:36 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	if (!n)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
//#include<stdio.h>
//int main()
//{
//	char s1[]= "abcf";
//	char s2[]= "abc";
//	printf("%d", ft_memcmp(s1, s2, 3));
//	return 0;
//}
