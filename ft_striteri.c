/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:43:44 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/25 15:42:00 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	c;

	c = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[c] != '\0')
	{
		(*f)(c, &s[c]);
		c++;
	}
}
