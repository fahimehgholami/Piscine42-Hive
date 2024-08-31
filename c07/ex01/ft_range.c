/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:44:12 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/17 15:41:39 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range_array;
	int	i;

	if (min >= max)
		return (NULL);
	range_array = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		range_array[i] = min;
		min++;
		i++;
	}
	return (range_array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range_array;
	int	min;
	int	max;
	int	i;

	min = 3;
	max = 8;
	range_array = ft_range(min, max);
	if (!range_array)
	{
		printf("Invalid range.\n");
		return (1);
	}
	i = 0;
	while (i < max - min)
	{
		printf("%d ", range_array[i]);
		i++;
	}
	printf("\n");
	free(range_array);
	return (0);
}
*/
