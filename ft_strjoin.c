/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 05:36:49 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/24 17:47:31 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*new;

	if (!str1 || !str2)
		return (NULL);
	if (!(new = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1))))
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		new[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		new[i + j] = str2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}
