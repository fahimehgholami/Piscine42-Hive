/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:21:22 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/17 22:54:47 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

static void	print_comb(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

static void	generate_combinations(int *arr, int start, int n, int current)
{
	int	i;

	if (current == n)
	{
		print_comb(arr, n);
		if (arr[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	i = start;
	while (i < 10)
	{
		arr[current] = i;
		generate_combinations(arr, i + 1, n, current + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];

	if (n <= 0 || n >= 10)
		return ;
	generate_combinations(arr, 0, n, 0);
	ft_putchar('\n');
}
/*
int	main(void)
{
	ft_print_combn(2);
	ft_putchar('\n');
	return (0);
}
*/
