/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:05:37 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 18:39:00 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}

// int main()
// {
// char str[] = "Holaaaadadadadfedfewfwfwef";
// ft_bzero(str, 5);
// bzero(str, 5);
// printf("%s", str);
// }