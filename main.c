#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "libft.h"

void	ft_print(char *c, int i)
{
	while (c[i])
		printf("%c", c[i++]);
}

int	main(void)
{
	printf("%d\n", memcmp("-128", "-128", 4));
	printf("%d\n", ft_memcmp("-128", "-128", 4));
	printf("%d\n", memcmp("0", "0", 4));
	printf("%d\n", ft_memcmp("0", "0", 4));
	printf("%d\n", memcmp("127", "120", 4));
	printf("%d\n", ft_memcmp("127", "120", 4));
}
