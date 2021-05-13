/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 05:36:49 by hesayah           #+#    #+#             */
/*   Updated: 2021/03/27 15:06:46 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strjoin_two(char *new, const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t_len;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	new = NULL;
	t_len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(char) * (t_len + 1));
	if (new == NULL)
		return (NULL);
	ft_memset(new, 0, t_len + 1);
	ft_strjoin_two(new, s1, s2);
	s1 = NULL;
	return (new);
}
