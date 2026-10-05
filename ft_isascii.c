/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:57:24 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 13:57:31 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	values[] = {65, 127, 128, -1, 0};
	int	i = 0;

	while (i < 5)
	{
		printf("ft_isascii(%d) = %d\n", values[i], ft_isascii(values[i]));
		i++;
	}
	return (0);
}*/
