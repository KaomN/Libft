/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:04:02 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:29:00 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_dellist(void *content, size_t size)
{
	ft_memdel(&content);
	(void)size;
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] != c)
			len++;
		else
			return (len);
	}
	return (len);
}

static int	ft_skip(char const *s, char c, int count, size_t wlen)
{
	count = count + wlen;
	while (s[count] != '\0' && s[count] == c)
		count++;
	return (count);
}

static void	ft_splittolist(t_list **lst, char const *s, int count, size_t wlen)
{
	char	*str;

	str = ft_strsub(s, count, wlen);
	if (*lst == NULL && s[count] != '\0')
		*lst = ft_lstnew(str, wlen);
	else if (s[count] != '\0')
	{
		(*lst)->next = ft_lstnew(str, wlen);
		if ((*lst)->next == NULL)
			return ;
		*lst = (*lst)->next;
	}
	free(str);
}

t_list	*ft_strsplitlist(char const *s, char c)
{
	t_list	*list;
	t_list	*tmp;
	int		count;
	size_t	wlen;

	count = 0;
	wlen = 0;
	tmp = NULL;
	list = NULL;
	while (s[count] != '\0')
	{
		count = ft_skip(s, c, count, wlen);
		wlen = ft_wordlen(&s[count], c);
		ft_splittolist(&tmp, s, count, wlen);
		if (tmp == NULL)
			return (ft_lstdelr(&list, ft_dellist));
		if (list == NULL)
			list = tmp;
	}
	return (list);
}
