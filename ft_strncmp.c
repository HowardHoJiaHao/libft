/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:11:16 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:11:18 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*s1 = "lib42";
	const char	*s2 = "lib";
	int			result;

	result = ft_strncmp(s1, s2, 3);
	printf("Compare 3 chars: %d\n", result);
	result = ft_strncmp(s1, s2, 5);
	printf("Compare 5 chars: %d\n", result);
	return (0);
}*/