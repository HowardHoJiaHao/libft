/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:58:52 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 13:58:53 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = count_len(nb);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb)
	{
		str[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(-2147483648);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(0);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(42);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
