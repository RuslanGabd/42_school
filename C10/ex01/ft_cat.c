/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:30:03 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/31 11:56:03 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

void	display_file(const char*filename)
{
	char	buffer[4096];
	ssize_t	bytes_read;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		if (write(1, buffer, bytes_read) != bytes_read)
		{
			write(2, "Cannot write to output.\n", 24);
			close(fd);
			return ;
		}
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (bytes_read == -1)
		write(2, "Cannot read file.\n", 18);
	close(fd);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		display_file(argv[i]);
		i++;
	}
	return (0);
}
