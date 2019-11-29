/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:40:52 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/15 17:06:50 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dt;
	unsigned const char	*sc;

	dt = (unsigned char*)dst;
	sc = (unsigned char*)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < len)
	{
		dt[i] = sc[(unsigned char)i];
		i++;
	}
	return (dst);
}
