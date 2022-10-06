/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:20:12 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 12:50:19 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

static char	*ftstrcat(char *s1, const char *s2, size_t siz)
{
	size_t	i;
	size_t	lens2;

	lens2 = ft_strlen(s1);
	i = 0;
	while (s2[i] && i < siz)
	{
		s1[lens2] = s2[i];
		i++;
		lens2++;
	}
	s1[lens2] = '\0';
	return (s1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	rslt;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst < size)
		rslt = lendst + lensrc;
	else if (size <= lendst)
		rslt = lensrc + size;
	if (size == 0)
		return (0);
	ftstrcat(dst, src, size);
	return (rslt);
}

//#include<stdio.h>
//#include<string.h>
//int main(int argc, char const *argv[])
//{
//	char *d;
//	d[14] = 'a';
//	char ss[30] = "lorem ipsum";
//	size_t ln = ft_strlcat(s, ss, ft_strlen(ss));
//	printf("%zu: %s  %s\n", ln, s, ss);

//	char s1[30]= "hello";
//	char ss1[30] = "bro cv";
//	size_t j =strlcat(s1,ss1,ft_strlen(ss1));
//	printf("%zu: %s  %s", j, s1, ss1);
//	return 0;
//}
