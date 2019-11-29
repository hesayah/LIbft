/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesayah <hesayah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 23:06:29 by hesayah           #+#    #+#             */
/*   Updated: 2019/11/22 21:52:05 by hesayah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !(*f) || !(new = ft_lstnew(f(lst->content))))
		return (NULL);
	temp = new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(new->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		new = new->next;
	}
	return (temp);
}
