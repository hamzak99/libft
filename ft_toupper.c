/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:19:14 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/02 19:27:40 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch = ch - 32;
	}
	return (ch);
}

//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	printf("%c", toupper('d'));
//	return 0;
//}
