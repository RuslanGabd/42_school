/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:16:19 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/18 13:43:16 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main() {
    
    printf("Fibonacci of 0: %d\n", ft_fibonacci(0)); // 0
    printf("Fibonacci of 1: %d\n", ft_fibonacci(1)); // 1
    printf("Fibonacci of 2: %d\n", ft_fibonacci(2)); // 1
    printf("Fibonacci of 3: %d\n", ft_fibonacci(3)); // 2
    printf("Fibonacci of 4: %d\n", ft_fibonacci(4)); // 3
    printf("Fibonacci of 5: %d\n", ft_fibonacci(5)); // 5
	printf("Fibonacci of -1: %d\n", ft_fibonacci(-1)); // -1

    return 0;
}
*/
