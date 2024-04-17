/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:51:51 by ktieu             #+#    #+#             */
/*   Updated: 2024/04/17 17:24:07 by ktieu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
/*-------------------------------------------------------------------------*/
/*								IS											*/
/*-------------------------------------------------------------------------*/

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

/*-------------------------------------------------------------------------*/
/*								MEMORY										*/
/*-------------------------------------------------------------------------*/

void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

/*-------------------------------------------------------------------------*/
/*								STRING										*/
/*-------------------------------------------------------------------------*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t new_dst_len);
#endif	
