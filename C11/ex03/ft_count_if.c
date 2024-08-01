/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:53:01 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/30 16:11:25 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			++count;
		i++;
	}
	return (count);
}
/*
int is_non_empty(char *str) {
    return (str[0] != '\0');
}

int main() {
    char *tab[] = {
        "hello",
        "",
        "world",
        "42",
        "",
        "school"
    };

    int length = sizeof(tab) / sizeof(tab[0]);

    int count = ft_count_if(tab, length, is_non_empty);
    printf("Number of non-empty strings: %d\n", count);

    return 0;
}
*/
