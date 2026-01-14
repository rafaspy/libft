#include <stdio.h>
#include <string.h>

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

void ft_bzero(void *b, size_t n)
{
	unsigned char *res;

	res = (unsigned char *)b;
	while (n > 0)
	{
		*res++ = '\0';
		n--;
	}
}
int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
int ft_isalnum(int c);
// lo hago en 42
int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int main(void)
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
}
