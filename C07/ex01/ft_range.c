/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:17:25 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/24 08:53:59 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	range = (int *) malloc(sizeof(int) * (i));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int main() {
    int min = -2147483647 ;
    int max = -2147483637  ;

    int *range = ft_range(min, max);
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
