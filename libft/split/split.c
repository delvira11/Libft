/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:11:48 by delvira-          #+#    #+#             */
/*   Updated: 2022/10/04 18:25:52 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

static int	ft_findchar(char c, char s)
{
	if (s == c)
		return (1);
	return (0);
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	last;
	int	wc;

	wc = 0;
	last = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_findchar(c, s[i]) == 0 && last == 1)
		{
			wc++;
		}
		last = ft_findchar(c, s[i]);
		i++;
	}
	return (wc);
}

static int	ft_startword(const char *s, char c, int index)
{
	int	i;

	i = 0;
	while (ft_findchar(c, s[index + i]))
	{
		i++;
	}
	return (i + index);
}

static int	ft_wordlen(const char *s, char c, int index)
{
	int	i;

	i = index;
	while (ft_findchar(c, s[i]) == 0 && s[i + 1] != '\0')
	{
		i++;
	}
	return (i - index);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		x;

	x = -1;
	i = 0;
	strs = (char **) malloc(ft_wordcount(s, c) + 1 * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	while (++x < ft_wordcount(s, c))
	{
		while (s[i] == c)
			i++;
		//if (!(strs[x] == ft_substr(s, i, ft_wordlen(s, c, i))))
		{
			while (x-- > 0)
				free(strs[x]);
			free (strs);
			return (NULL);
		}
		i += ft_wordlen(s, c, i);
	}
	strs[x] = 0;
	return (strs);
}

int main()
{
char	s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
printf("%d", ft_wordlen(s, ' ', 72));
}