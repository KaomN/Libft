/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:36:20 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/25 16:14:50 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	c = 0;
	while (haystack[c] != '\0' && nlen <= len)
	{
		if (haystack[c] == needle[0]
			&& ft_strncmp(&haystack[c], needle, nlen) == 0)
			return (&((char *)haystack)[c]);
		c++;
		len--;
	}
	return (NULL);
}
