/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:39:47 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/30 16:39:58 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_util.h"
#include <unistd.h>

void	error(char *filename)
{
	write(2, "tail: ", 6);
	write(2, filename, ft_strlen(filename));
	write(2, ": No such file or directory\n", 28);
}
