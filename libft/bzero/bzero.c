/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:05:37 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/23 12:30:44 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	str = s;
	i = 0;
	if (n > 1)
	{
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
	}
}

// int main()
// {
// char str[] = "Holaaaadadadadfedfewfwfwef";
// ft_bzero(str, 5);
// bzero(str, 5);
// printf("%s", str);
// }