/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:56:03 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/06 15:12:54 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Hello, world!";
	char dest[20];

	ft_strncpy(dest, src, 5);

	printf("source:%s\n", src);
	printf("Destination: %s\n", dest);
	ft_strncpy(dest, src, 15);

	printf("Destination with larger n: %s\n", dest);

	return (0);
}
*/
