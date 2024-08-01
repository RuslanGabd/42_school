/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:03:14 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/30 09:31:15 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include "do_op.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

bool	contains_character(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (contains_character(*str, "\t\n\v\f\r "))
		str++;
	while (contains_character(*str, "+-"))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}

int	calculation(int a, int b, char c)
{
	if (c == '+')
		return (add(a, b));
	else if (c == '-')
		return (subtract(a, b));
	else if (c == '*')
		return (multiply(a, b));
	else if (c == '/')
		return (divide(a, b));
	else if (c == '%')
		return (modulo(a, b));
	else
		return (0);
}

int	main(int argc, char **argv)
{
	char	operator;
	int		value1;
	int		value2;

	if (argc != 4)
		return (0);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	operator = argv[2][0];
	if (value2 == 0 && operator == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (value2 == 0 && operator == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(calculation(value1, value2, operator));
	write(1, "\n", 1);
	return (0);
}
