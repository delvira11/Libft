/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:24:29 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/24 19:12:28 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
char	*ft_strrchr(const char *s, int c)
{
	char	caracter;
	char	*str;
	int		i;

caracter = (char )c;
str = (char *)s;
i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == caracter)
		{
			return (&str[i]);
		}
	i--;
	}
	if (str[i] == '\0' && caracter == '\0')
	{
		return (&str[i]);
	}
	return (NULL);
}
*/
// int main()
// {
// char strj[] = "fwewfe.fweewf.wffwewfe.holaaaa";
// printf("%s\n", strrchr(strj, '.'));
// char strx[] = "fwewfe.fweewf.wffwewfe.holaaaa";
// printf("%s\n", ft_strrchr(strx, '.'));
// }

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
	i--;
	}
	if (s[i] == '\0' && c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
