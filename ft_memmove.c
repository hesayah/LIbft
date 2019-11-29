/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:55:27 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/15 14:27:45 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	tmp[len];

	if (dst == NULL && src == NULL)
		return (NULL);
	if (len < 65535)
	{
		ft_memcpy(tmp, src, len);
		ft_memcpy(dst, tmp, len);
		return (dst);
	}
	return (0);
}
