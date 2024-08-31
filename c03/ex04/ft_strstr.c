/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:21:05 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/08 15:53:09 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
    char str1[] = "Hello, world!";
    char to_find1[] = "world";
    char *result1 = ft_strstr(str1, to_find1);
    if (result1)
        printf("Found substring: %s\n", result1);
    else
        printf("Substring not found.\n");
    char str2[] = "Hello, world!";
    char to_find2[] = "lo";
    char *result2 = ft_strstr(str2, to_find2);
    if (result2)
        printf("Found substring: %s\n", result2);
    else
        printf("Substring not found.\n");
    char str3[] = "Hello, world!";
    char to_find3[] = "planet";
    char *result3 = ft_strstr(str3, to_find3);
    if (result3)
        printf("Found substring: %s\n", result3);
    else
        printf("Substring not found.\n");
    return 0;
}
*/
