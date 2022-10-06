/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:20:21 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 19:15:35 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s;

	s = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if(!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

//#include<stdio.h>
//#include<string.h>
//int main(int argc, char const *argv[])
//{
//	char s[] = "hello";
//	char *s1;
//	s1 = ft_strdup(s);
//	printf("%s\n",s1);

//	char d[] = "hello";
//	char *s2;
//	s2 = strdup(d);
//	printf("%s",s2);
//	return 0;
//}
