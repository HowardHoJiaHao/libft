/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:14:21 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:14:23 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	letter;
	int		lower;

	letter = 'G';
	lower = ft_tolower(letter);
	printf("Original: %c, Lower: %c\n", letter, lower);
	letter = '1';
	lower = ft_tolower(letter);
	printf("Original: %c, Lower: %c\n", letter, lower);
	return (0);
}*/
