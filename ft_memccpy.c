/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:14:21 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/25 16:06:53 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(
		void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (n-- > 0)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		if (((unsigned char *)src)[x] == (unsigned char)c)
			return (dst + x + 1);
		x++;
	}
	return (NULL);
}
