/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:57:07 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 13:57:08 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[] = {'A', 'z', '5', '#'};
	int		i = 0;

	while (i < 4)
	{
		printf("ft_isalpha('%c') = %d\n", test[i], ft_isalpha(test[i]));
		i++;
	}
	return (0);
}*/
