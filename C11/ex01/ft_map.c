/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:53:01 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/29 18:19:53 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = malloc (length * sizeof(int *));
	if (!result)
		return (0);
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}
/*
int increment(int n) {
    return n + 1;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int length = sizeof(tab) / sizeof(tab[0]);


   int *result = ft_map(tab, length, increment);

   for (int i = 0; i < length; i++)
   {
	   printf("%d\n", result[i]);
   }
    return 0;
    free(result);
}
*/
