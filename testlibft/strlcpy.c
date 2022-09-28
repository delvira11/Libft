/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:59:56 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 18:46:59 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	cont;
	unsigned int	i;

cont = 0;
i = 0;
	while (src[cont] != '\0')
	{
cont++;
	}
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (cont);
}

// int main()
// {
// char src[] = "Holaaa";
// char dest[] = "Haloo";
// printf("%zu\n", ft_strlcpy(dest, src, 4));
// printf("%s\n", dest);
// printf("%lu\n", strlcpy(dest, src, 4));
// }