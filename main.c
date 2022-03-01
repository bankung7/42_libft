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
	char dest[15];

	memset(dest, 0, 15);
	memset(dest, 'a', 6);

	printf("%lu\n", strlcat(dest, "lorem ipsum", 15));
	printf("%s\n", dest);
}
