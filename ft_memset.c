#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char		*cb;
	int	i;

	cb = (char *)b;
	i = 0;

	while (*cb && i < (int)len)
	{
		cb[i] = c;
		i++;
	}
	return (void *)cb;
}
