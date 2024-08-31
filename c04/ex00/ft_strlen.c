/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:24:32 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/09 21:33:37 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
int main(void)
{
	char test_str[] = {"Hello World!\n"};
	int length;

	length = ft_strlen(test_str);

	printf("Lengh of the str: %d\n", length);

	return (0);
}
*/
