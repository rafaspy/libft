/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafsanch <rafsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 21:09:13 by rafsanch          #+#    #+#             */
/*   Updated: 2026/01/15 21:37:25 by rafsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	size_t				i;
	unsigned char		*d;
	unsigned char		array[n];

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (n-- > 0)
	{
		array[i] = s[i];
		i++;
	}
	while (i-- > 0)
	{
		d[n] = array[n];
		n++;
	}
	return (dest);
}
