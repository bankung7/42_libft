#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char		*c;
	int			i;

	c = (char *)s;
	i = 0;
	while (*c && i <= (int)n)
		c[i++] = '\0';
}
