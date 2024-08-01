/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:30:03 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/30 17:38:42 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../includes/ft_util.h"

char	*put(int file, char *characters)
{
	int		j;
	char	buffer[28672];
	ssize_t	bytes;
	int		k;

	j = 0;
	bytes = read(file, &buffer, 28672);
	while (bytes)
	{
		k = 0;
		while (k < bytes)
		{
			characters[j] = buffer[k];
			++k;
			++j;
		}
		bytes = read(file, &buffer, 28672);
	}
	characters[j] = '\0';
	return (characters);
}

void	display_head(int i, int count, char *filename)
{
	if ((i < count && i > 3) || (count > 4 && i == 3))
	{
		if (i > 3)
			write(1, "\n", 1);
		write(1, "==> ", 4);
		write(1, filename, ft_strlen(filename));
		write(1, " <==\n", 5);
	}
}

void	write_file(char *characters, int count_characters, int max)
{
	int	k;

	k = 0;
	while (characters[++k])
		if ((max > 0 && k >= count_characters - max)
			|| (max < 0 && k >= max * -1))
			write(1, &characters[k], 1);
}

void	ft_display(int count, char *files[], int max, char *characters)
{
	int		file;
	int		i;
	int		count_characters;

	i = 3;
	while (i < count)
	{
		display_head(i, count, files[i]);
		file = open(files[i], O_RDONLY);
		if (file == -1)
		{
			error(files[i++]);
			continue ;
		}
		count_characters = ft_count_characters(files[i]);
		characters = malloc(sizeof(char) * count_characters);
		close(file);
		characters = put(open(files[i], O_RDONLY), characters);
		write_file(characters, count_characters, max);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		max;
	char	*characters;

	characters = "";
	if (argc <= 2)
		write(2, "Option is missing.\n", 19);
	else if (argc <= 3)
		write(2, "File is missing.\n", 17);
	else
	{
		max = ft_atoi(argv[2]);
		if (max < 0)
			max *= -1;
		else if (argv[2][0] == '+')
			max *= -1;
		ft_display(argc, argv, max, characters);
	}
	return (0);
}
