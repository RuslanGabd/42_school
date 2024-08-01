/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:09:56 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/13 15:05:27 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	midle_rush(int x, int y, int z)
{
	int	count1;
	int	count2;
	int	f;

	f = y - 2;
	count1 = 0;
	while (count1 < f)
	{
		ft_putchar('B');
		count1++;
		count2 = 0;
		while (count2 < z)
		{
			ft_putchar(' ');
			count2++;
		}
		if (x > 2)
			ft_putchar('B');
		ft_putchar('\n');
	}
}

void	last_line(int x)
{
	int	i;

	i = 0;
	ft_putchar('A');
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int	z;
	int	i;

	i = 0;
	z = x - 2;
	if (y <= 0 || x <= 0)
		return ;
	ft_putchar('A');
	while (i < z)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
	if (y > 2)
		midle_rush (x, y, z);
	if (y > 1)
		last_line (x);
}
