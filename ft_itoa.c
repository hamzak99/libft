/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:37:13 by hkasbaou          #+#    #+#             */
/*   Updated: 2022/10/05 21:54:28 by hkasbaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

static int	cntnmb(long n)
{
	int	cnt;

	cnt = 0;
	if (n < 0)
		n *= (-1);
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static char	*ifcheck(int cnt, long n)
{
	char	*t;

	if (n == 0)
	{
		t = malloc(2 * sizeof(char));
		t[0] = '0';
		t[1] = '\0';
	}
	if (n < 0)
	{
		t = malloc((cnt + 2) * sizeof(char));
		t[0] = '-';
		t[cnt + 1] = '\0';
	}
	else if (n > 0)
	{
		t = malloc((cnt + 1) * sizeof(char));
		t[cnt] = '\0';
	}
	return (t);
}

static char *fill(char *tab,int cnt, long nb)
{
    if (nb < 0)
	{
		nb *= -1;
		while (cnt > 0)
		{
			tab[cnt--] = nb % 10 + '0';
			nb /= 10;
		}
	}
	else if (nb > 0)
	{
		cnt--;
		while (cnt >= 0)
		{
			tab[cnt--] = nb % 10 + '0';
			nb /= 10;
		}
	}
    return tab;
}

char	*ft_itoa(int n)
{
	char	*tab;
	long	nb;
	int		cnt;

	nb = n;
	cnt = cntnmb(nb);
	tab = ifcheck(cnt, n);
	if(!tab)
		return NULL;
    tab = fill(tab, cnt, nb);
	return (tab);
}
//#include<stdio.h>
//int main()
//{
//    printf("%s", ft_itoa(574));
//}