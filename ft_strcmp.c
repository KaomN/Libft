/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:46:45 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/17 19:55:58 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while (((unsigned char *)s1)[c] != '\0' && ((unsigned char *)s2)[c] != '\0')
	{	
		if (((unsigned char *)s1)[c] != ((unsigned char *)s2)[c])
			break ;
		c++;
	}
	return (((unsigned char *)s1)[c] - ((unsigned char *)s2)[c]);
}
