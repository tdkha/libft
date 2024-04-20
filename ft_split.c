/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:37:12 by ktieu             #+#    #+#             */
/*   Updated: 2024/04/20 10:20:13 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_skip_delimiter(char const *s, char delimiter)
{
	while (*s && *s == delimiter)
		s++;
}

static int	ft_wordcount(char const *s, char delimiter)
{
	int	count;

	count = 0;
	while (*s)
	{
		ft_skip_delimiter(s, delimiter);
		if (*s)
			count++;
		s++;
	}
	return (count);
}

static void	ft_free_all(char **array, size_t index)
{
	while (index--)
	{
		free(&array[index]);
	}
	free(array);
}

char	**ft_split_helper(char **res, char const *s, char delimiter)
{
	size_t	cur_word_len;
	int		i;

	i = 0;
	while (*s)
	{
		ft_skip_delimiter(s, delimiter);
		if (*s)
		{
			if (!ft_strchr(s, delimiter))
				cur_word_len = ft_strlen(s);
			else
				cur_word_len = ft_strchr(s, delimiter) - s;
			res[i++] = ft_substr(s, 0, cur_word_len);
			if (!res)
			{
				ft_free_all(res, i);
				return (NULL);
			}
			s += cur_word_len;
		}
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char delimiter)
{
	char	**res;

	res = (char **) malloc((ft_wordcount(s, delimiter) + 1) * sizeof(char *));
	if (!res)
		return (0);
	ft_split_helper(res, s, delimiter);
	return (res);
}
