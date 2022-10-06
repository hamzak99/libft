/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:21:16 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/02 19:01:45 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 'a' && x <= 'z' ) || (x >= 'A' && x <= 'Z' ))
		return (1);
	return (0);
}

//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	int x = '5';
//	printf("%d", isalpha(x));
//	return 0;
//}
