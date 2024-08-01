/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:53:01 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/29 18:05:46 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
void ft_putnbr(int n) {
    printf("%d\n", n);
}
// Main function to demonstrate usage
int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int length = sizeof(tab) / sizeof(tab[0]);

    // Applying ft_foreach with ft_putnbr function
    ft_foreach(tab, length, &ft_putnbr);

    return 0;
}
*/
