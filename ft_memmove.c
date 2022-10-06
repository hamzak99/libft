/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:17:28 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 17:54:25 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *) dst;
	s = (char *) src;
	if(!d && !s)
		return (NULL);
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void *)dst);
}

//#include<stdio.h>
//#include<string.h>
//int main(int argc, char const *argv[])
//{

//	char s[40] = "aaaaaaa";
//	char d[40] = "ddddddd";
//	ft_memmove(s ,d ,4);
//	printf("%s\n",s);
//	//char ss[40] = "aaaaaaa";
//	//char dd[40] = "ddddddd";
//	//memmove(ss,dd,4);
//	//printf("%s",ss);
//	return 0;
//}
