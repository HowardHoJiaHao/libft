/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:13:33 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:13:39 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*set;
	char	*result;

	str = "xx42xKLxx";
	set = "x";
	result = ft_strtrim(str, set);
	if (result)
	{
		printf("Trimmed: %s\n", result);
		free(result);
	}
	else
		printf("Memory allocation failed.\n");
	return (0);
}*/
