/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:33:33 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 14:16:57 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	caracter;
	char	*str;
	size_t	i;

caracter = (char)c;
str = (char *)s;
i = 0;
	while (i < n)
	{
		if (str[i] == caracter)
		{
			return (&str[i]);
		}
	i++;
	}
	if (!s)
	{
		return (&str[i]);
	}
	return (NULL);
}

// int main()
// {
// char str[] = "Holaaa";
// printf("%s", ft_memchr(str, 'l', 5));
// printf("%s", memchr(str, 'l', 5));
// }