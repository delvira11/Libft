/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:24:08 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/23 12:41:27 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

dest = (unsigned char *)dst;
source = (unsigned char *)src;
i = 0;
	while (i < n)
	{
dest[i] = source[i];
i++;
	}
	return (dest);
}

// int main()
// {
// char src[] = "Hola Buenas";
// char dst[] = "Gfewewewfw";
// ft_memcpy(dst, src, 5);
// printf("%s", dst);
// }
