/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:43:11 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/29 20:00:47 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1len;
	size_t	s2len;
	size_t	i;

	s1len = strlen(s1);
	s2len = strlen(s2);
	str = (char *)calloc((s1len + s2len + 1), sizeof(char));
	if (!str)
		return (NULL);
	strlcpy(str, s1, s1len + 1);
	i = 0;
	while (i <= s2len + 1)
	{
		str[s1len + i] = s2[i];
		i++;
	}
	return (str);
}

int main()
{
char s1[] = "Hola";
char s2[] = "Buenas";
printf("%s", ft_strjoin(s1, s2));
}