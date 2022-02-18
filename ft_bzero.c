#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;

	while ((char *)s && i > (int)n)
	{
		(char )s = '\0';
		i++;
	}
}
