/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:21:12 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/03 13:31:53 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	return (0);
}
//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	int s = 127;
//	printf("%d", isascii(s));
//	return 0;
//}
