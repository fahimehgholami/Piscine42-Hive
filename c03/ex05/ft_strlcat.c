/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:53:32 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/08 18:27:27 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				src_size;
	unsigned int	dest_size;
	unsigned int	i;

	i = 0;
	src_size = 0;
	dest_size = 0;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (dest[dest_size])
		dest_size++;
	if (size <= dest_size)
		return (size + src_size);
	i = 0;
	while (size && (--size - dest_size) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
/*
#include <stdio.h>

int main()
{
    char dest1[20] = "Hello, ";
    char src1[] = "world!";
    unsigned int size1 = 20;
    unsigned int result1 = ft_strlcat(dest1, src1, size1);
    printf("Result 1: %s (length: %u)\n", dest1, result1);
    char dest2[20] = "Hello, ";
    char src2[] = "world!";
    unsigned int size2 = 10;
    unsigned int result2 = ft_strlcat(dest2, src2, size2);
    printf("Result 2: %s (length: %u)\n", dest2, result2);
    char dest3[20] = "Hello, ";
    char src3[] = "world!";
    unsigned int size3 = 5;
    unsigned int result3 = ft_strlcat(dest3, src3, size3);
    printf("Result 3: %s (length: %u)\n", dest3, result3);
    return 0;
}
*/
