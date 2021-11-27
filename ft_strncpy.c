/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:20:39 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/25 16:05:50 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	unsigned int	c;

	c = 0;
	while (src[c] && c < len)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < len)
		dest[c++] = '\0';
	return (dest);
}
