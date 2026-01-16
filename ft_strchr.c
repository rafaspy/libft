/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafsanch <rafsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 22:11:12 by rafsanch          #+#    #+#             */
/*   Updated: 2026/01/16 23:17:38 by rafsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	while (*s)
	{
		if (*s == character)
		{
			return ((char *)s);
		}
		s++;
	}
	if (character == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

