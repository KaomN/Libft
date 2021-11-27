/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:02:31 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/25 16:12:04 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	c;

	c = 0;
	if (s == NULL)
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (c < len)
	{
		str[c] = s[start];
		c++;
		start++;
	}
	return (str);
}
