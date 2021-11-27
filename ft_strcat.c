/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:21:37 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/18 14:42:08 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t	s1len;
	size_t	len;

	s1len = ft_strlen(s1);
	len = 0;
	while (s2[len])
	{
		s1[s1len] = s2[len];
		s1len++;
		len++;
	}
	s1[s1len] = '\0';
	return (s1);
}
