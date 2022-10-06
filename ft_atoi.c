/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:21:49 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/02 22:53:29 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	space(char str)
{
	if (str == ' ' || str == '\r' || str == '\f'
		|| str == '\v' || str == '\n' || str == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	rtr;

	rtr = 0;
	i = 0;
	sign = 1;
	while (space(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rtr = str[i] + (rtr * 10) - '0';
		i++;
	}
	return (rtr * sign);
}

//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//	printf("%d\n", atoi("+548"));
//	printf("%d",ft_atoi("+548"));
//	return 0;
//}
