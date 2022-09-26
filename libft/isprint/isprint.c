/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:52:14 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/22 13:21:30 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}

// int	main(void)
// {
// 	for (int i = -300; i < 300; i++)
//     {
//         printf("%d --> %d : %d \n", i, ft_isprint(i), isprint(i));
//     }
    
// }
