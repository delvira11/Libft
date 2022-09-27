/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:00:17 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/26 18:02:53 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	z;

	i = 0;
	x = 0;
	z = 0;
	while (dst[x] != '\0')
		x++;
	while (src[z] != '\0')
		z++;
	if (dstsize <= x)
		z = z + dstsize;
	else
		z = z + x;
	while (src[i] && (x + 1) < dstsize)
	{
		dst[x] = src[i];
		i++;
		x++;
	}
	dst[x] = '\0';
	return (z);
}

// int main()
// {
// 	char src[50] = "holaaa";
// 	char dest[50] = "dewww";
// 	printf("%zu\n", ft_strlcat(dest, src, 20));
// 	printf("%lu\n", strlcat(dest, src, 20));
// }