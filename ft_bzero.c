/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:55:48 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 13:55:50 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	buffer[10] = "abcdefghij";
	int		i;

	printf("original:%s\n", buffer);
	ft_bzero(buffer + 3, 4);
	i = 0;
	printf("ASCII: ");
	while (i < 10)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");
	printf("%s\n", buffer);
	return (0);
}*/