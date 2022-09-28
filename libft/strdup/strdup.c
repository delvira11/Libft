/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:04:44 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 19:38:40 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(strlen(s1) * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	strlcpy(str, s1, strlen(s1));
	return (str);
}


int main()
{
const char	s1[] = "Holaaa";
printf("%p\n", ft_strdup(s1));
printf("%p\n", strdup(s1));
}