/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:20:25 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/03 13:30:11 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if (!(char)c)
		return ((char *)str + i);
	return (0);
}
//#include<stdio.h>
//int main()
//{
//	char str[] = "http://www.tutorialspoint.com";
//	char *ret = ft_strchr(str,'.');
//	printf("%s",ret);
//	return 0;
//}
