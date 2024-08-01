/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgabdrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:23:00 by rgabdrak          #+#    #+#             */
/*   Updated: 2024/07/16 12:56:52 by rgabdrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len1;
	unsigned int	len2;

	len1 = 0;
	len2 = 0;
	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0' && len2 < nb)
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

	ft_strncat(dest, src, 666666);

	printf("%s\n", dest);
	return 0;

}
*/
