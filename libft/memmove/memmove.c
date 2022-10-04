/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:48:15 by delvira-          #+#    #+#             */
/*   Updated: 2022/10/04 19:21:34 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*dest;
	size_t	i;

i = 0;
source = (char *)src;
dest = (char *)dst;
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			dest[len] = source[len];
		}
	}
	if (dst < src)
	{
		while (i < len)
		{
		dest[i] = source[i];
		i++;
		}
	}
	return (dest);
}

int main()
{
char src[50] = "feefefwhola";
char dst[50] = "aaaaaaaaaaa";
printf("%s\n", ft_memmove(dst, src, 7));
printf("%s\n", memmove(dst, src, 7 ));
}
