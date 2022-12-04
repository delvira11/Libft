#include "MLX42/include/MLX42/MLX42.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define WIDTH 256
#define HEIGHT 256
#include "libft/libft.h"

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

int	**ft_matrix(void)
{
	int		**matrix;
	int		fd;
	char	*line;
	char	**linesplited;
	int		i;
	int		x;
	int		j;

	i = 0;
	x = 0;
	j = 0;
	line = "";
	fd = open("test.txt", O_RDONLY);
	matrix = (int **)malloc((ft_get_heigh() * ft_get_line_width())
			* sizeof(int));
	while (line)
	{
	i = 0;
	j = 0;
	line = ft_get_next_line(fd);
	linesplited = ft_split(line, ' ');
		while (linesplited[j])
		{
		matrix[x][i] = ft_atoi(linesplited[j]);
		i++;
		j++;
		}
	x++;
	}
	close(fd);
	return (matrix);
}

int	main(void)
{
	ft_matrix();
	system("leaks -q ./fdf");
}
