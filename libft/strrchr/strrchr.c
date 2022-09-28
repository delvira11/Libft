/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:24:29 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 14:23:05 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;

i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
	i--;
	}
	if (!s)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}


int main()
{
char str[50] = "grsgege";
printf("%s\n", strrchr(str, 's'));
printf("%s\n", ft_strrchr(str, 's'));
}