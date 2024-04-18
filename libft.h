/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktieu <ktieu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:51:51 by ktieu             #+#    #+#             */
/*   Updated: 2024/04/18 16:16:18 by ktieu            ###   ########.fr       */
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
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s);
/*-------------------------------------------------------------------------*/
/*								STRING										*/
/*-------------------------------------------------------------------------*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t new_dst_len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*-------------------------------------------------------------------------*/
/*								TYPE										*/
/*-------------------------------------------------------------------------*/

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);

/*-------------------------------------------------------------------------*/
/*						DYNAMIC MEMORY ALLOCATION							*/
/*-------------------------------------------------------------------------*/

void	*ft_calloc(size_t count, size_t size);
#endif	
