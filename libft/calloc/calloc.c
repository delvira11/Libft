/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:30:29 by delvira-          #+#    #+#             */
/*   Updated: 2022/10/03 16:35:55 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// void *calloc(count,size)
// {
// 	void *ptr;

// 	ptr = (void *)malloc(count * size);
// 	if(ptr == NULL)
// 		return(NULL);
// 	ft_bzero(ptr, count * size);

// 	return (ptr);
// }

// int	main()
// {
// 	char *str;
// 	char *str2 = "hola que ase";
// 	void malloc();

// 	*str = *str2;

// 	str = (char *)malloc(sizeof(char) * strlen(str2) + 1);
// 	if(str == NULL)
// 		retunr(NULL);

// 	ft_strlcpy(str2, str, strlen(str2));

// 	///str = strcpy(str, "Hola");
// 	printf("%s", str);
// }
