/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:37:12 by ktieu             #+#    #+#             */
/*   Updated: 2024/04/19 16:32:48 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char delimiter)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == delimiter)
			s++;
		if (*s)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char delimiter)
{
	char	**res;
	size_t	cur_word_len;
	int		i;

	i = 0;
	res = (char **) malloc((ft_wordcount(s, delimiter) + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (!s || *s)
	{
		while (*s && *s == delimiter)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, delimiter))
				cur_word_len = ft_strlen(s);
			else
				cur_word_len = ft_strchr(s, delimiter) - s;
			res[i++] = ft_substr(s, 0, cur_word_len);
			s += cur_word_len;
		}
	}
	res[i] = NULL;
	return (res);
}
