/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:03:34 by ktieu             #+#    #+#             */
/*   Updated: 2024/04/17 15:25:08 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*returned_dst;
	
	returned_dst = (unsigned char *) dst;
	if (!dst || !src) /* missing */
		return (dst);
	if (dst == src) /* same address */
		return (dst);
	if (dst <= src)
	{
		while (len--)
		{
			*(char *)dst++ = *(char *)src++;
		}
	}
	else if (dst > src)
	{
		while(len--)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	return (returned_dst)

}
