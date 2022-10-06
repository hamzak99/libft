/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:21:38 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/02 18:51:33 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

//#include <stdio.h>
//int main()
//{
//	char s[34]= "This is string.h library function";
//	ft_bzero(s,34);
//	printf("%s",s);
//	return 0;
//}
