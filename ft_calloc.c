/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:05:33 by ktieu             #+#    #+#             */
/*   Updated: 2024/04/24 10:33:33 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count && size && count > (ULONG_MAX / size))
		return (NULL);
	res = malloc(count * size);
	if (!res)
		return (0);
	ft_bzero(res, (count * size));
	return (res);
}
