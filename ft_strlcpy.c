/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:09:56 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:09:58 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char		dest[10];
	const char	*src = "42KL";
	size_t		len = ft_strlcpy(dest, src, sizeof(dest));

	printf("copied string: %s\n", dest);
	printf("length of src: %zu\n", len);
	return (0);
}*/
