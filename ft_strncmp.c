/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:46:45 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/13 09:47:42 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
		return (0);
	while (c < n - 1 && s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
			break ;
		c++;
	}
	return (((unsigned char *)s1)[c] - ((unsigned char *)s2)[c]);
}
