/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:52:14 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/31 17:53:43 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

char	**ft_buf_malloc(int l, char **buf, int c)
{
	int	i;

	i = 0;
	while (i < l)
	{
		buf[i] = malloc(c * sizeof(char));
		if (buf[i] == NULL)
			return (NULL);
		i++;
	}
	return (buf);
}

char	**add_end_in_buf(int l, char *argv, char **buf, int c)
{
	int	i;
	int	ret;
	int	fd;

	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	i = 0;
	while (i < l)
	{
		ret = read(fd, buf[i], c);
		if (ret == -1)
			return (NULL);
		buf[i++][c - 1] = '\0';
	}
	close(fd);
	return (buf);
}
