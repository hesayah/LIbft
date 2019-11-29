/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 03:50:26 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/24 20:05:01 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 1;
	if (nb < 0)
	{
		nb = -nb;
		len = 2;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*ft_strrev(char *str)
{
	long	i;
	long	j;
	long	len;
	char	*temp;

	len = ft_strlen(str);
	j = len;
	if (!(temp = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (str[0] == '-')
	{
		temp[0] = '-';
		i = 1;
	}
	while (i < len)
	{
		temp[i] = str[j - 1];
		i++;
		j--;
	}
	temp[i] = '\0';
	return (temp);
}

char		*ft_itoa(int n)
{
	int		len;
	long	i;
	long	nb;
	char	*num;

	i = 0;
	nb = n;
	len = ft_len(nb);
	if (!(num = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
		i = 1;
	}
	while (i < len)
	{
		num[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	num[len] = '\0';
	num = ft_strrev(num);
	return (num);
}
