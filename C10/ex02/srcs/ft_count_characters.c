/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_characters.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:12:56 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/30 18:13:13 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../includes/ft_util.h"

int	ft_count_characters(char *files)
{
	ssize_t	bytes;
	char	buffer[28672];
	int		file;
	int		count_characters;

	file = open(files, O_RDONLY);
	count_characters = 0;
	bytes = read(file, &buffer, 28672);
	while (bytes > 0)
	{
		count_characters += bytes;
		bytes = read(file, &buffer, 28672);
	}
	return (count_characters);
}
