/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:58:13 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 13:58:21 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	values[] = {21, 32, 65, 126, 127};
	int	i = 0;

	while (i < 5)
	{
		printf("ft_isprint(%d) = %d\n", values[i], ft_isprint(values[i]));
		i++;
	}
	return (0);
}*/
