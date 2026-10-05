/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:01:08 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:01:29 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	a[] = {1, 2, 3, 4};
	char	b[] = {1, 2, 4, 4};
	int		result;

	result = ft_memcmp(a, b, 3);
	printf("memcmp result: %d\n", result);
	result = ft_memcmp(a, b, 2);
	printf("memcmp result: %d\n", result);
	return (0);
}*/