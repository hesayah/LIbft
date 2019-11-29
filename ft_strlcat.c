/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:30:03 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/15 14:58:08 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	while (dst[i] && i < dstsize)
		i++;
	while (i + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize != 0 && dstsize > dstlen)
		dst[i] = '\0';
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	return (ft_strlen(src) + dstlen);
}
