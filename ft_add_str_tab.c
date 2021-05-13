/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_str_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:47:32 by hesayah           #+#    #+#             */
/*   Updated: 2021/03/27 15:08:36 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_add_str_tab(char **tab, char *str)
{
	int		i;
	char	**new;

	i = 0;
	while (tab[i] != NULL)
		i++;
	new = (char **)malloc(sizeof(char *) * (i + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (tab[i] != NULL)
	{
		new[i] = ft_strdup(tab[i]);
		i++;
	}
	new[i] = ft_strdup(str);
	new[i + 1] = NULL;
	ft_free(tab);
	return (new);
}
