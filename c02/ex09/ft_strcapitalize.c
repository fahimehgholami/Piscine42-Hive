/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:30:39 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/07 09:55:24 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (!(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z')
		&& !(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		space;

	space = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
		{
			space = 1;
		}
		else
		{
			if (space == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			space = 0;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "hello world! this is a test.";

	printf("source: %s\n", str);
	printf("Captalized: %s\n", ft_strcapitalize(str));

	return (0);
}
*/
