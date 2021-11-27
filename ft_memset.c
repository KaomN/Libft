/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:34:20 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/25 16:07:13 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
