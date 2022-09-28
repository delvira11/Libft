/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:10:48 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 18:46:27 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// char strj[] = "Hola buenos .dias";
// printf("%s\n", strchr(strj, '.'));
// char strx[] = "Hola buenos .dias";
// printf("%s\n", ft_strchr(strx, '.'));
// }