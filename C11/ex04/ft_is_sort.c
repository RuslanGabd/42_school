/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:53:01 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/29 19:06:49 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	ascending;
	int	descending;
	int	i;

	ascending = 1;
	descending = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			ascending = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			descending = 0;
		i++;
	}
	return (ascending || descending);
}
/*
int	compare(int n, int m)
{
	return (n - m);
}

int main() {
    int tab1[] = {1, 2, 3, 4, 5};
    int length1 = sizeof(tab1) / sizeof(tab1[0]);

    int tab2[] = {5, 4, 3, 2, 1};
    int length2 = sizeof(tab2) / sizeof(tab2[0]);

    int tab3[] = {1, 3, 2, 4, 5};
    int length3 = sizeof(tab3) / sizeof(tab3[0]);

    // Checking if arrays are sorted
    int result1 = ft_is_sort(tab1, length1, compare);
    int result2 = ft_is_sort(tab2, length2, compare);
    int result3 = ft_is_sort(tab3, length3, compare);

    // Print the results
    printf("tab1 is sorted: %d\n", result1); // Expected output: 1
    printf("tab2 is sorted: %d\n", result2); // Expected output: 1
    printf("tab3 is sorted: %d\n", result3); // Expected output: 0

    return 0;
}
*/
