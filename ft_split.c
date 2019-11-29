/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:10:30 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/25 18:00:54 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nc(char const *str, char c)
{
	int i;
	int j;

	if (!str[0])
		return (0);
	i = 1;
	j = 1;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != '\0' && str[i - 1] != c)
			j++;
		i++;
	}
	if (str[i - 1] == c)
		return (j - 1);
	if (i != 0)
		return (j);
	return (0);
}

static int	ft_lnmod(char const *str, char c, int index)
{
	static int i;

	i = 0;
	while (str[i + index] != '\0')
	{
		if (str[i + index] == c)
			break ;
		i++;
	}
	return (i);
}

static char	*ft_strdp(const char *str, char *new1, int index, char c)
{
	int i;
	int len;

	len = ft_lnmod(str, c, index);
	if (!(new1 = (char*)malloc(sizeof(char) + len)))
		new1 = NULL;
	i = 0;
	while (i < len)
	{
		new1[i] = str[index + i];
		i++;
	}
	new1[i] = '\0';
	return (new1);
}

static void	ft_free(char **tab, int i)
{
	int j;

	j = 0;
	while (j <= i)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
}

char		**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		index;
	char	**new;

	if (!str)
		return (NULL);
	index = 0;
	j = ft_nc(str, c);
	if (!(new = (char**)malloc(sizeof(char*) * (j + 1))))
		return (NULL);
	i = -1;
	while (++i < j)
	{
		while (str[index] == c)
			index++;
		if (!(new[i] = ft_strdp(str, new[i], index, c)))
		{
			ft_free(new, i);
			return (NULL);
		}
		index += ft_lnmod(str, c, index);
	}
	new[j] = NULL;
	return (new);
}
