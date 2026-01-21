/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafsanch <rafsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:10:58 by rafsanch          #+#    #+#             */
/*   Updated: 2026/01/21 20:56:47 by rafsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr_res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!*s)
		return (NULL);
	while (s[i] == c)
		i++;
		// i = " "    arr res 0 = ho
	while (s[i])
	{
		arr_res[j][k] = s[i];
		i++;
		k++;
		if (s[i] == c)
		{
			arr_res[j][k] = '\0';
			i++;
			j++;
			k = 0;
		}
	}
	arr_res[j] = NULL;
	return (arr_res);
}
