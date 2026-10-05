/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:13:57 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:14:04 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < finish)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_substr("libft success", 6, 3);
	if (result)
	{
		printf("Result 1: %s\n", result);
		free (result);
	}
	result = ft_substr("42 KL", 0, 5);
	if (result)
	{
		printf("Result 2: %s\n", result);
		free (result);
	}
	result = ft_substr("hello", 10, 3);
	if (result)
	{
		printf("Result 3: %s\n", result);
		free (result);
	}
	return (0);
}*/
