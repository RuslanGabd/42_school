/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:57:00 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/19 08:25:03 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	str_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_sort_char_array(char **array, int size)
{
	int	i;
	int	n;

	n = 0;
	while (n < size - 1)
	{
		i = 1;
		while (i < size - 1 - n)
		{
			if (ft_strcmp(array[i], array[i + 1]) > 0)
			{
				str_swap(&array[i], &array[i + 1]);
			}
			i++;
		}
		n++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_char_array (argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
