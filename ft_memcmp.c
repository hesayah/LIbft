/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:34:28 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/19 18:36:18 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char*)str1;
	b = (unsigned char*)str2;
	i = 0;
	if (!str1 && !str2)
		return (0);
	while (i < n)
	{
		if (a[i] != b[i])
			return (((unsigned char*)a)[i] - ((unsigned char*)b)[i]);
		i++;
	}
	return (0);
}
