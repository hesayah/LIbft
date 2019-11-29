/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:31:10 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/25 17:53:34 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;

	if (!str || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(str) - 1;
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	if (start == end + 1)
		return (ft_strdup(""));
	while (str[end] && ft_strrchr(set, str[end]))
		end--;
	return (ft_substr(str, start, (end - start + 1)));
}
