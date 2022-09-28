/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:58:14 by delvira-          #+#    #+#             */
/*   Updated: 2022/09/28 18:47:12 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;	

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%zu", ft_strlen("poikjuyhgt"));
// 	printf("%zu", strlen("aaassddfes"));
// }
