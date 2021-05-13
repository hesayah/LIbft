/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 05:37:17 by hesayah           #+#    #+#             */
/*   Updated: 2021/04/21 04:20:45 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!str)
		return (NULL);
	if (start > ft_strlen(str) || len <= 0)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	ft_memset(new, 0, i + 1);
	while (i < len && str[start + i] != '\0')
	{
		new[i] = str[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
