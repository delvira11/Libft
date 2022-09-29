/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:11:33 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/29 16:36:49 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *) haystack);
	}
	while ((haystack[i] != '\0') && (i < len))
	{
		x = 0;
		while (haystack[i + x] != '\0' && haystack[i + x] == needle[x]
			&& ((i + x) < len))
		{
			if (needle[x + 1] == '\0')
			{
				return ((char *) &haystack[i]);
			}
			x++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char str1[] = "lorem ipsum dolor sit amet";
	char str2[] = "dolor";

	printf("%s\n", ft_strnstr(str1, str2, 19));
	printf("%s\n", strnstr(str1, str2, 19));
}