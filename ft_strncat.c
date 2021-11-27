/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:21:37 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/22 15:37:10 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t			s1len;
	unsigned int	len;

	s1len = ft_strlen(s1);
	len = 0;
	while (s2[len] && len < n)
	{
		s1[s1len] = s2[len];
		s1len++;
		len++;
	}
	s1[s1len] = '\0';
	return (s1);
}
