/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafsanch <rafsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 21:05:08 by rafsanch          #+#    #+#             */
/*   Updated: 2026/01/21 18:11:57 by rafsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*cpy;
	unsigned int		i;

	if (!s)
		return (NULL);
	if (start >= strlen(s))
		return (ft_strdup(""));
	if (start + len > strlen(s))
		len = strlen(s) - start;
	i = 0;
	cpy = (char *)malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		cpy[i] = s[start + i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
