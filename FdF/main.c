/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:46:36 by delvira-          #+#    #+#             */
/*   Updated: 2022/12/05 15:03:05 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MLX42/include/MLX42/MLX42.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft/libft.h"
#define WIDTH 256
#define HEIGHT 256

int	ft_get_heigh(void)
{
	// Esta funcion devuelve la altura del input
	char	*str;
	int		i;
	int		fd;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	str = ft_get_next_line(fd);
	while (str)
	{
		str = ft_get_next_line(fd);
		i++;
	}
	close (fd);
	return (i);
}

int	ft_get_line_width(void)
{
	// Esta funcion devuelve el numero de numeros en la linea
	char	*str;
	char	**linesplited;
	int		x;
	int		fd;

	x = 0;
	fd = open("test.txt", O_RDONLY);
	str = ft_get_next_line(fd);
	linesplited = ft_split(str, ' ');
	while (linesplited[x])
		x++;
	close(fd);
	return (x);
}

int	**ft_matrix_fill(int **matrix, int fd)
{
	int		i;
	int		j;
	int		x;
	char	*line;
	char	**linesplited;

	x = 0;
	j = 0;
	x = 0;
	line = ft_get_next_line(fd);
	while (line)
	{
		i = 0;
		j = 0;
		linesplited = ft_split(line, ' ');
		while (linesplited[j])
		{
			matrix[x][i] = ft_atoi(linesplited[j]);
			j++;
			i++;
		}
		line = ft_get_next_line(fd);
		x++;
	}	
	return (matrix);
}

int	**ft_matrix(int heigh, int width)
{
	int		**matrix;
	int		fd;
	int		malloccounter;

	malloccounter = 0;
	fd = open("test.txt", O_RDONLY);
	matrix = (int **)malloc(heigh * sizeof(int *));
	if (!matrix)
		return (matrix);
	while (malloccounter < heigh)
	{
		matrix[malloccounter] = (int *)malloc(width * sizeof(int));
		malloccounter++;
	}
	matrix = ft_matrix_fill(matrix, fd);
	close(fd);
	return (matrix);
}

int	main(void)
{
	int	**matrix;
	// int	heigh;
	// int	width;

	// heigh = ft_get_heigh();
	// width = ft_get_line_width();
	matrix = ft_matrix(ft_get_heigh(), ft_get_line_width());
// 	int row, columns;
// for (row=0; row<heigh; row++)
// {
//     for(columns=0; columns<width; columns++)
//     {
//         printf("%i ", matrix[row][columns]);
//     }
//     printf("\n");
// }
}
