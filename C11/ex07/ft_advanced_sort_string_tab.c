/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:38:06 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/30 11:09:06 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*temp;
	int		i;
	int		j;
	int		len;

	len = 0;
	i = 0;
	while (tab[len])
		len++;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int ascending_cmp(char *a, char *b) {
    return strcmp(a, b);
}

// Custom comparison function for descending ASCII order
int descending_cmp(char *a, char *b) {
    return strcmp(b, a);
}

// Function to print the array of strings
void print_tab(char **tab) {
    for (int i = 0; tab[i] != NULL; i++) {
        printf("%s\n", tab[i]);
    }
}

int main() {
    char *tab[] = {
        "banana",
        "apple",
        "orange",
        "grape",
        "cherry",
        NULL
    };

    printf("Before sorting:\n");
    print_tab(tab);

    // Sort in ascending order
    ft_advanced_sort_string_tab(tab, ascending_cmp);
    printf("\nAfter sorting in ascending order:\n");
    print_tab(tab);

    // Sort in descending order
    ft_advanced_sort_string_tab(tab, descending_cmp);
    printf("\nAfter sorting in descending order:\n");
    print_tab(tab);

    return 0;
}
*/
