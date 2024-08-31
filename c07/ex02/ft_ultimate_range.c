/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:41:32 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/15 19:19:04 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	arr = (int *)malloc(len * sizeof(int));
	if (arr == 0)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	len;
	int	i;
	len = ft_ultimate_range(&arr, 1, 6);
	if (len > 0)
	{
		i = 0;
		while (i < len)
		{
			printf("%d ", arr[i]);
			i++;
		}
		free(arr);
	}
	else if (len == 0)
		printf("Empty \n");
	else
		printf("allocation failed\n");
	return (0);
}
*/
