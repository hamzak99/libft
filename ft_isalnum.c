/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:21:20 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/02 18:21:21 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_isalnum(int x)
{
	if (ft_isdigit(x) || ft_isalpha(x))
		return (1);
	return (0);
}

//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	int x = '5';
//	printf("%d", isalnum(x));
//	return 0;
//}
