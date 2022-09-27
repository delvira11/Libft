/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:11:51 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/26 17:35:03 by delvira-         ###   ########.fr       */
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

int main()
{
char str[] = "Hola buenos diass";
printf ("%s\n", ft_memset(str, 'c', 5) );
printf ("%s\n", memset(str, 'c', 5));
}