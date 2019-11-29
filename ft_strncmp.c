/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:40:14 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/19 10:56:37 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t				i;
	const unsigned char *s1;
	const unsigned char *s2;

	i = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	if (!str1 && !str2)
		return (0);
	if (n > 0)
	{
		while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
			i++;
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
