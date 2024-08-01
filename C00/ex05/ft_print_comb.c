/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 08:27:08 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/13 08:33:27 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigit(char c)
{
	char	str;

	str = '0' + c;
	write (1, &str, 1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	digit0;
	char	digit1;
	char	digit2;

	digit2 = 0;
	while (digit2 <= 7)
	{
		digit1 = digit2 + 1;
		while (digit1 <= 8)
		{
			digit0 = digit1 + 1;
			while (digit0 <= 9)
			{
				ft_putdigit(digit2);
				ft_putdigit(digit1);
				ft_putdigit(digit0);
				if (!(digit2 == 7 && digit1 == 8 && digit0 == 9))
					write (1, ", ", 2);
				++digit0;
			}
			++digit1;
		}
		++digit2;
	}
}
/*
int	main(void)
{
	ft_print_comb();
return (0);
}
*/
