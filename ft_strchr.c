/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hho-jia- <hho-jia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:07:24 by hho-jia-          #+#    #+#             */
/*   Updated: 2025/06/03 14:07:28 by hho-jia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*text = "libft success";
	char		*found;

	found = ft_strchr(text, 'c');
	if (found)
	{
		printf("Found: %s\n", found);
	}
	else
	{
		printf("Character not found.\n");
	}
	return (0);
}*/
