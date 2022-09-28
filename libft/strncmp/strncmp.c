/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:16:05 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 14:43:57 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = strlen(s1);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	while ((i < n) && i <= j)
	{
		if ((s1[i] != s2[i]))
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
int main()
{
char str1[] = "teste";
char str2[] = "teste";
printf("%i\n", ft_strncmp(str1, str2, 7));
printf("%i\n", strncmp(str1, str2, 7));
}