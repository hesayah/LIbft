/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:10:30 by hesayah           #+#    #+#             */
/*   Updated: 2021/02/03 12:19:06 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nc(char const *str, char c)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (str[0] == '\0')
		return (0);
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
	static int	i;

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
	int	i;
	int	len;

	len = ft_lnmod(str, c, index);
	new1 = (char *)malloc(sizeof(char) + len);
	if (new1 == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new1[i] = str[index + i];
		i++;
	}
	new1[i] = '\0';
	return (new1);
}

static int	creat_tab(char **new, const char *str, char c, int c_word)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (i < c_word)
	{
		while (str[index] == c)
			index++;
		new[i] = ft_strdp(str, new[i], index, c);
		if (new[i] == NULL)
		{
			ft_free(new);
			return (0);
		}
		index += ft_lnmod(str, c, index);
		i++;
	}
	new[c_word] = NULL;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	int		c_word;
	int		ret;
	char	**new;

	if (!str)
		return (NULL);
	c_word = ft_nc(str, c);
	new = (char **)malloc(sizeof(char *) * (c_word + 1));
	if (new == NULL)
		return (NULL);
	ret = creat_tab(new, str, c, c_word);
	if (ret == 0)
		return (NULL);
	return (new);
}
