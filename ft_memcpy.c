/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:27:37 by ktieu             #+#    #+#             */
/*   Updated: 2024/04/17 14:00:32 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dst;

	c_src = (char *) src;
	c_dst = (char *) dst;

	while (n--)
	{
		*c_dst++ = *c_src++;
	}
	return (dst);
}
