/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:19:59 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/03 13:31:21 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (int)n - 1 && str1[i] && str2[i] && str1[i] == str2[i])
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char s1[]= "rewr34r";
//	char s2[]= "abc";
//	printf("%d \n",strncmp(s1,s2,7));
//	printf("%d",ft_strncmp(s1,s2,7));
//	return 0;
//}
