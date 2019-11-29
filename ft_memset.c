/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:57:01 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/19 18:35:57 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str2 = str;
	while (i < len)
	{
		str2[i] = (unsigned char)c;
		i++;
	}
	return ((void*)str);
}
