/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:10:16 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:10:22 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Length of 'hello' = %zu\n", ft_strlen("hello"));
	printf("Length of '' = %zu\n", ft_strlen(""));
	printf("Length of '42 KL' = %zu\n", ft_strlen("42 KL"));
	return (0);
}*/
