/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:23:02 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/19 11:03:50 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned	long	int	i;
	const		char		*str2;

	str2 = str;
	i = 0;
	while (i < n)
	{
		if (str2[i] == c)
			return ((void*)&str2[i]);
		i++;
	}
	return (NULL);
}
