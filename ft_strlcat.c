/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:21:37 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/22 15:36:59 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t			dstlen;
	unsigned int	len;
	size_t			start;

	start = ft_strlen(dst);
	dstlen = ft_strlen(dst);
	len = 0;
	if (dstlen < dstsize)
	{
		while (src[len] && dstsize - dstlen - 1 > len)
		{
			dst[start] = src[len];
			start++;
			len++;
		}
		dst[len + dstlen] = '\0';
	}
	if (dstlen < dstsize)
		return (dstlen + ft_strlen(src));
	return (ft_strlen(src) + dstsize);
}
