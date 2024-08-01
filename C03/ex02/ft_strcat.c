/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:23:00 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/16 12:56:40 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len1;
	int	len2;

	len1 = 0;
	len2 = 0;
	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
	{
		dest[len1 + len2] = src[len2];
		len2++;
	}
	dest[len1 + len2] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main ()
{
	char dest[]="Hello ";
	char src[]="world!";

	ft_strcat(dest, src);

	printf("%s\n", dest);
	return 0;

}
*/
