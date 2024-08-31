/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:03:05 by fagholam          #+#    #+#             */
/*   Updated: 2024/08/08 13:57:00 by fagholam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_strncmp("abc", "abc", 3));//out:0
	printf("%d\n", ft_strncmp("abc", "abd", 3));//out:N
	printf("%d\n", ft_strncmp("abc", "abb", 3));//out:p
	printf("%d\n", ft_strncmp("abc", "ab", 3));//out:P
	printf("%d\n", ft_strncmp("abc", "abcd", 3));//out:0
        printf("%d\n", ft_strncmp("abcd", "abc", 4));//out:P
	return (0);
}
*/
