/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:16:05 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 14:44:50 by delvira-         ###   ########.fr       */
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
// {
// 	size_t	i;

// 	i = 0;
// 	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
// 	{
// 		if (s1[i] > s2[i])
// 		{
// 			return (1);
// 		}
// 		if (s1[i] < s2[i])
// 		{
// 			return (-1);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// int main()
// {
// char str1[] = "holaaaaaa";
// char str2[] = "adiosss";
// printf("%i\n", ft_strncmp(str1, str2, 4));
// printf("%i\n", strncmp(str1, str2, 4));
// }