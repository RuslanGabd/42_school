/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:53:01 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/29 18:44:07 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab++))
			return (1);
	}
	return (0);
}
/*
int is_not_empty(char *str) {
 
return (str[0] != '\0');
}

int main() {
    char *tab[] = {"", "", "", NULL};

    // Applying ft_any with is_not_empty function
    int result = ft_any(tab, is_not_empty);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
*/
