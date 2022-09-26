/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:02:41 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/26 13:21:39 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <strings.h>
# include <strings.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *s, int c);

int		ft_isalnum(int c);
int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

int		ft_tolower(int c);

int		ft_toupper(int c);

int		ft_atoi(const char *str);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcpy(char *restrict dst,
			const char *restrict src, size_t dstsize);

size_t	ft_strlcat(char *restrict dst,
			const char *restrict src, size_t dstsize);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif