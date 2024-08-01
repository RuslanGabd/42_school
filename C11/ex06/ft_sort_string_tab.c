/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:38:06 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/30 11:06:28 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
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

    ft_sort_string_tab(tab);

    printf("\nAfter sorting:\n");
    print_tab(tab);

    return 0;
}
*/
