/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:20:57 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 17:59:57 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i ;
	char	*s;

	i = 0;
	s = (char *) str;
	while (s[i] && i < n)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (!(char)c)
		return ((char *)str + i);
	return (NULL);
}

//#include<stdio.h>
//int main()
//{
//	char str[] = "http://www.tutorialspoint.com";
//	char *ret = memchr(str,'.',ft_strlen(str));
//	printf("%s",ret);
//	return 0;
//}