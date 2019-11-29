/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:09:23 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/22 20:37:16 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (str2[j] == '\0')
		return ((char*)str1);
	while (str1[i] != '\0')
	{
		while (str1[i + j] == str2[j] && str2[j])
			j++;
		if (j == ft_strlen(str2) && i + j <= len)
			return ((char*)&str1[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
