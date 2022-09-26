/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:10:48 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/23 14:18:57 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	caracter;
	char	*str;
	int		i;

caracter = c;
str = (char *)s;
i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == caracter)
		{
			return (&str[i]);
		}
	i++;
	}
	if (str[i] == '\0' && caracter == '\0')
	{
		return (&str[i]);
	}
	return (NULL);
}

// int main()
// {
// char strj[] = "";
// printf("%s\n", strchr(strj, 'a'));
// char strx[] = "";
// printf("%s\n", ft_strchr(strx, 'a'));
// }