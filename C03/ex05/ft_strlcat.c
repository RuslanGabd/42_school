/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:23:00 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/16 17:24:23 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;

	src_len = 0;
	dest_len = 0;
	i = 0;
	j = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0')
		dest_len++;
	if (size <= dest_len)
		return (size + src_len);
	j = dest_len;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int	main ()
{
	char dest[]="Hello ";
	char src[]="world!";
	unsigned int res = 0;

	res = ft_strlcat(dest, src, 20);

 	printf("dest: \"%s\"\n", dest);
	printf("Total length: %u\n", res);
	return 0;

}
*/
