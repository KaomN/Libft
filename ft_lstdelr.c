/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:37:05 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/26 21:41:58 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstdelr(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	next = *alst;
	while (next != NULL)
	{
		next = next->next;
		ft_lstdelone(alst, del);
		*alst = next;
	}
	return (NULL);
}
