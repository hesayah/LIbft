/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:28:25 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/15 20:25:13 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int j;

	j = ft_strlen(str);
	i = 0;
	if (str)
	{
		while (i <= j)
		{
			if (str[i] == c)
				return ((char*)&str[i]);
			i++;
		}
	}
	return (NULL);
}
