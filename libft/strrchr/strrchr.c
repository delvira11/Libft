/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:24:29 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/26 18:24:54 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int main()
{
char str[50] = "tripouille";
printf("%s\n", strrchr(str, 't' + 256 == str));
printf("%s\n", ft_strrchr(str, 't' + 256 == str));
}