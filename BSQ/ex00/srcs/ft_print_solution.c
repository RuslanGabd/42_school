/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:14:47 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/31 13:14:50 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

char	**ft_fill_map(char **map, char *file, char o, char p)
{
	int		i;
	int		j;
	int		pos;
	int		c;
	int		l;

	o = ft_get_char_obst(file);
	p = ft_get_char_full(file);
	c = ft_get_number_columns(file);
	l = ft_get_number_lines(file);
	pos = ft_find_position_square(map, c, l, o);
	i = (pos / (c - 1)) - ft_biggest_square(map, c, l, o) + 1;
	while (i < (pos / (c - 1)) + 1)
	{
		j = (pos % (c -1)) - ft_biggest_square(map, c, l, o) + 1;
		while (j < (pos % (c -1)) + 1)
		{
			map[i][j] = p;
			j++;
		}
		i++;
	}
	return (map);
}

void	ft_print_solution(int i, char **argv, int j, int l)
{
	int		fd;
	char	**map;
	char	o;
	char	p;

	o = 1;
	p = 1;
	map = NULL;
	j = 0;
	l = ft_get_number_lines(argv[i]);
	fd = open (argv[i], O_RDONLY);
	if (fd >= 0)
		map = ft_read_file(argv[i]);
	ft_fill_map(map, argv[i], o, p);
	while (j < l)
	{
		ft_putstr(map[j]);
		ft_putchar('\n');
		j++;
	}
	free(map);
	close (fd);
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;
	int	l;

	k = 0;
	l = 0;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if ((ft_verif_map(argv[i])) == 1)
				;
			else
				ft_print_solution(i, argv, k, l);
			i++;
		}
	}
	else
		return (0);
}
