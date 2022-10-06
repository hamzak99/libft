/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:21:23 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 19:14:25 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = malloc(count * size);
	if(!s)
		return (0);
	ft_bzero(s, count * size);
	return ((void *)s);
}
//int main(int argc, char const *argv[])
//{
//	char *s = ft_calloc(3,sizeof(char));
//	return 0;
//}