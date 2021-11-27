/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:47:36 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/24 18:35:48 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char const *s)
{
	size_t	len;
	char	*rev;
	size_t	c;

	len = ft_strlen(s);
	rev = ft_strnew(sizeof(char) * len + 1);
	c = 0;
	if (rev == NULL)
		return (NULL);
	while (len != 0)
	{
		rev[len - 1] = s[c];
		len--;
		c++;
	}
	return (rev);
}
