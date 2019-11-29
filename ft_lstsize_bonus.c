/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:12:27 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/19 18:41:59 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*elem;

	if (!lst)
		return (0);
	i = 1;
	elem = lst;
	while (elem->next != NULL)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}
