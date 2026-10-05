/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:07:57 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:08:00 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*copy;

	i = 0;
	while (s1[i])
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*text = "42KL";
	char		*copy;

	copy = ft_strdup(text);
	if (copy)
	{
		printf("Original: %s\n", text);
		printf("Copy : %s\n", copy);
		free(copy);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}*/
