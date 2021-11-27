/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:56 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/25 15:39:30 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	c;
	size_t			len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = ft_strnew(sizeof(*str) * len);
	if (str == NULL)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		str[c] = (*f)(c, s[c]);
		c++;
	}
	return (str);
}
