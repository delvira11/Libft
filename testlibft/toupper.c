/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:26:50 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/22 14:05:10 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
	c = c - 32;
	}
	return (c);
}

// int main()
// {
// printf("%c", ft_toupper('&'));
// printf("%c", toupper('%'));
// }