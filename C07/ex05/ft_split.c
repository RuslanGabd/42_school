/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:38:20 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/29 10:12:41 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strndup(char *src, int n)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *) malloc((n + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (i < n)
	{
		dup[i] = src[i];
		i++;
	}
	dup[n] = '\0';
	return (dup);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!is_separator(str[i], charset))
		{
			count++;
			while (str[i] && !is_separator(str[i], charset))
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		j;
	int		k;
	int		i;

	j = 0;
	result = (char **) malloc((count_words(str, charset) + 1) * sizeof(char *));
	i = 0;
	k = 0;
	while (str[i])
	{
		if (!is_separator(str[i], charset))
		{
			j = i;
			while (str[i] && !is_separator(str[i], charset))
				i++;
			result[k] = ft_strndup(str + j, i - j);
			k++;
		}
		else
			i++;
	}
	result[k] = 0;
	return (result);
}
/*
int main() {
     char *str =  "Hello, world! This is a test.";
     char *charset = " ,!.";
     char **split = ft_split(str, charset);

     for (int i = 0; split[i]; i++) {
         printf("Segment %d: %s\n", i, split[i]);
     }
    int i = 0;
    while (split[i]) {
        free(split[i]);
        i++;
    }
    free(split);

     return 0;
}
*/
