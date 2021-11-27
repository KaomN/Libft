/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:14:50 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/24 14:37:15 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	cmp;

	if (s1 == NULL || s2 == NULL)
		return (0);
	cmp = ft_strncmp(s1, s2, n);
	if (cmp != 0)
		return (0);
	return (1);
}
