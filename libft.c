/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafsanch <rafsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:52:18 by rafsanch          #+#    #+#             */
/*   Updated: 2026/01/15 19:39:18 by rafsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int	ft_isalpha(unsigned char c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0);
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

int ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

void *ft_memset(void *b, int c, size_t len)
{
	int i;
	unsigned char *res;

	i = 0;
	res = (unsigned char *)b;
	while (len > 0)
	{
		res[i++] = (unsigned char)c;
		len--;
	}
	return (b);
}

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*res;

	res = (unsigned char *)b;
	while (n > 0)
	{
		*res++ = '\0';
		n--;
	}
}
/* int main(void)
{
	// printf("Mi funcion devuelve %d", ft_isascii('\0'));
	char a[20];
	char b[20];

	ft_bzero(a, 42);
	bzero(b, 42);

	if (memcmp(a, b, 42) == 0)
		printf("OK\n");
	else
		printf("ERROR\n");

	return (0);
} */
