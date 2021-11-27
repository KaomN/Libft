/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:35:19 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/25 16:06:29 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(const char *)s1 != *(const char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
