/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:53:34 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/24 14:15:56 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_list_size(t_list *list)
{
	t_list	*temp;
	size_t	size;

	size = 0;
	temp = list;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
