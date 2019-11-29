/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:17:02 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/19 18:42:45 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *elem;
	t_list *temp;

	if (!lst || !del)
		return ;
	elem = *lst;
	while (elem)
	{
		temp = elem->next;
		ft_lstdelone(elem, del);
		elem = temp;
	}
	*lst = NULL;
}
