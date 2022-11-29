/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:00:27 by delvira-          #+#    #+#             */
/*   Updated: 2022/10/26 18:29:23 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *str, ...);
int		printchar(char c);
int		print_str(char *str);
int		print_percent(void);
int		print_num(int n);
int		ft_print_hexhigh(unsigned int n);
int		ft_print_hexlow(uintptr_t n);
int		ft_print_unsigned(unsigned int n);
int		ft_ptr_void(unsigned long long n);
char	*ft_itoa(int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

#endif