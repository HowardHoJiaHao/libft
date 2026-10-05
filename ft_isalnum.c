/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:56:38 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 13:56:46 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[] = {'A', 'Z', '5', '%'};
	int		i = 0;

	while (i < 4)
	{
		printf("ft_isalnum('%c') = %d\n", test[i], ft_isalnum(test[i]));
		i++;
	}
	return (0);
}*/