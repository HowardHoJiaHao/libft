/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:56:23 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 13:56:24 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > __SIZE_MAX__ / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
int	main(void)
{
	int		*arr;
	size_t	count = 5;
	size_t	size = sizeof(int);
	size_t	i;

	arr = (int *)ft_calloc(count, size);
	if (!arr)
	{
		printf("ft_calloc failed\n");
		return (1);
	}
	i = 0;
	while (i < count)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
