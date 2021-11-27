/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:52:46 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/26 13:45:51 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;

	if (src == NULL && dest == NULL)
		return (dest);
	c = 0;
	while (c < n)
	{
		((unsigned char *)dest)[c] = ((unsigned char *)src)[c];
		c++;
	}
	return (dest);
}
