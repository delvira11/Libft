/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:05:08 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/29 18:33:38 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			left;
	size_t			mem;
	unsigned int	i;

left = strlen(s) - (size_t)start;
	if (left >= len)
	mem = len;
	if (left < len)
	mem = left;
	if (start > strlen(s))
		mem = 0;
	str = (char *)calloc((mem + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < mem)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char str[] = "hola";
	printf("%s", ft_substr(str, 200, 2));
}