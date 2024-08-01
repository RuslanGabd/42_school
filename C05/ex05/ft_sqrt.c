/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:26:18 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/18 13:42:14 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb && sqrt < nb / 2)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
/*
int main() {
    // Test cases
    printf("Square root of 4: %d\n", ft_sqrt(4)); // 2
    printf("Square root of 16: %d\n", ft_sqrt(16)); // 4
    printf("Square root of 25: %d\n", ft_sqrt(25)); // 5
    printf("Square root of 26: %d\n", ft_sqrt(26)); // 0 (not a perfect square)
    printf("Square root of -4: %d\n", ft_sqrt(-4)); // 0 (negative number)
    printf("Square root of 0: %d\n", ft_sqrt(0)); // 0

    return 0;
}
*/
