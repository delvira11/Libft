/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:31:44 by delvira-          #+#    #+#             */
/*   Updated: 2022/10/06 17:45:48 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
