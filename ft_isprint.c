/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:21:04 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/03 12:57:55 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

//#include<stdio.h>
// #include<ctype.h>
//int main(int argc, char const *argv[])
//{
//	int s = 123;
//	printf("%d", ft_isprint(s));
//	printf("%d", isprint((char)s));
//	return 0;
//}
