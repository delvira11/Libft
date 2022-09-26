/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:11:51 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/23 12:49:06 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	simbolo;
	unsigned char	*str;

simbolo = c;
str = b;
i = 0;
	while (i < len)
	{
		str[i] = simbolo;
		i++;
	}
	return (b);
}

// int main()
// {
// char str[50] = "Hola buenos diass";
// printf ("%s\n", ft_memset(str, '&', 50) );
// printf ("%s\n", memset(str, '&', 50));
// }