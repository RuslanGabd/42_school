/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:41:18 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/18 13:46:52 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		result = nb * (ft_recursive_power (nb, power -1));
	return (result);
}
/*
#include <unistd.h>
#include <stdio.h>
int main() {
    
  printf("2^3 = %d\n", ft_recursive_power(2, 3)); // 8
    printf("5^0 = %d\n", ft_recursive_power(5, 0)); // 1
    printf("2^-3 = %d\n", ft_recursive_power(2, -3)); // 0
    printf("0^0 = %d\n", ft_recursive_power(0, 0)); // 1
    printf("3^4 = %d\n", ft_recursive_power(3, 4)); // 81

    return 0;
    }
*/
