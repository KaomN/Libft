/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:50:56 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/26 15:37:39 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_del(void *content, size_t size)
{
	if (content != NULL)
	{
		ft_memdel(&content);
		(void)size;
	}
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	temp = ft_lstnew((*f)(lst)->content, (*f)(lst)->content_size);
	if (temp == NULL)
		return (NULL);
	newlist = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew((*f)(lst)->content, (*f)(lst)->content_size);
		if (!temp->next)
		{
			newlist = NULL;
			ft_lstdel(&newlist, &ft_del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (newlist);
}
