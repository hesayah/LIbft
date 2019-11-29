/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:26:42 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/22 20:36:11 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	c = (const char)c;
	k = ft_strlen(str);
	if (!str)
		return (NULL);
	while (i <= k)
	{
		if (c == str[i])
			j = i;
		i++;
	}
	if (j > 0)
		return ((char*)&str[j]);
	else if (str[0] == c)
		return ((char*)str);
	return (NULL);
}
