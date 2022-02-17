#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	printf("testing all function\n");
	int c	= 15;

	while (c <= 127)
	{
		if (isalpha(c) != ft_isalpha(c))
			printf("found dif at %c - %d - %d\n", c, isalpha(c), ft_isalpha(c));
		if (isdigit(c) != ft_isdigit(c))
			printf("found dif at %c - %d - %d\n", c, isdigit(c), ft_isdigit(c));
		c++;
	}
}
