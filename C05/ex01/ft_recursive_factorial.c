/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:33:03 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/18 13:48:38 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main() {
    
    printf("Factorial of 5: %d\n", ft_recursive_factorial(5)); // 120
    printf("Factorial of 0: %d\n", ft_recursive_factorial(0)); // 1
    printf("Factorial of -3: %d\n", ft_recursive_factorial(-3)); // 0
    printf("Factorial of 10: %d\n", ft_recursive_factorial(10)); // 3628800

    return 0;
}
*/
