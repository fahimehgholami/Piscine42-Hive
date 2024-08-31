/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:48:22 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/12 17:20:19 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	factorial;

	result = 1;
	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (factorial <= nb)
	{
		result = result * factorial;
		factorial++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	value;

	value = 5;
	printf(" %d! is %d\n", value, ft_iterative_factorial(value));
	return (0);
}
*/
