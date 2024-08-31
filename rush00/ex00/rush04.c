/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:28:47 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/04 15:00:43 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	v;
	int	p;

	p = 1;
	while (p <= y)
	{
		v = 1;
		while (v <= x)
		{
			if ((v == 1 && p == 1) || (v == x && p == y) && (x != 1 && y != 1))
				ft_putchar('A');
			else if ((v == x && p == 1) || (v == 1 && p == y)
				|| (y == 1 && v == x))
				ft_putchar('C');
			else if (v == 1 || v == x || p == 1 || p == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			v++;
		}
		p++;
		ft_putchar('\n');
	}
}
