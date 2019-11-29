/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 05:44:05 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/24 17:15:34 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	if (!str || !(*f))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	if (!(s2 = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s2[i] = f(i, str[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
