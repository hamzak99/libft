/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:19:27 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/02 19:28:27 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		ch = ch + 32;
	}
	return (ch);
}

//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	printf("%c", tolower('W'));
//	return 0;
//}
