/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:12:29 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/26 14:44:02 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	c;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = ft_strnew(sizeof(*str) * len);
	if (str == NULL)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		str[c] = (*f)(s[c]);
		c++;
	}
	return (str);
}
