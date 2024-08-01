/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:17:25 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/24 08:54:07 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min == 0 && max == 0)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (max - min);
}
/*
int main() {
    int min = -2147483647 ;
    int max = -2147483637  ;
    int *range;
	int size;

    size = ft_ultimate_range(&range, min, max);
    if (range == NULL) {
        printf("Invalid range or memory allocation failed\n");
        return 1;
    }

    int range_size = max - min;
    for (int i = 0; i < range_size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range); // Free the allocated memory

    return 0;

}
*/
