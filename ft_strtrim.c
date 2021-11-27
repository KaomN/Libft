/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:16:07 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/24 17:27:57 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_getstart(char const *s)
{
	size_t	start;

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	return (start);
}

static size_t	ft_getend(char const *s)
{
	size_t	end;

	end = ft_strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	return (end + 1);
}

char	*ft_strtrim(char const *s)
{
	int		c;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s)
		return (NULL);
	start = ft_getstart(s);
	end = ft_getend(s);
	if (start >= end)
		return (ft_strnew(0));
	str = ft_strnew(end - start);
	if (str == NULL)
		return (NULL);
	c = 0;
	while (start < end)
	{
		str[c++] = s[start++];
	}
	return (str);
}
