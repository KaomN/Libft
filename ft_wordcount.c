/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:01:45 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/24 10:08:12 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t	wordcount;
	int		count;

	count = 0;
	wordcount = 0;
	while (s[count] != '\0')
	{
		while (s[count] == c && s[count] != '\0')
			count++;
		if (s[count] != c && s[count] != '\0')
			wordcount++;
		while (s[count] != c && s[count] != '\0')
			count++;
	}
	return (wordcount);
}
