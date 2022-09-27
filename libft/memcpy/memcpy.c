/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:24:08 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/26 17:59:56 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
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

int main()
{
char src[] = "forlorn";
char dst[] = "aaa";
ft_memcpy(dst, src, 4);
printf("%s", dst);
}
