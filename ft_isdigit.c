/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:57:53 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 16:52:53 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	tests[] = {'0', '5', '9', 'a', '#'};
	int		i = 0;

	while (i < 5)
	{
		printf("ft_isdigit('%c') = %d\n", tests[i], ft_isdigit(tests[i]));
		i++;
	}
	return (0);
}*/