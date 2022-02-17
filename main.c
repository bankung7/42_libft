#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	printf("testing all function\n");
	int c	= 15;

	while (c <= 127)
	{
		if (isalpha(c) != ft_isalpha(c))
			printf("isalpha found dif at %c - %d - %d\n", c, isalpha(c), ft_isalpha(c));
		if (isdigit(c) != ft_isdigit(c))
			printf("isdigit found dif at %c - %d - %d\n", c, isdigit(c), ft_isdigit(c));
		if (isalnum(c) != ft_isalnum(c))
			printf("isalnum found dif at %c - %d - %d\n", c, isalnum(c), ft_isalnum(c));
		if (isascii(c) != ft_isascii(c))
			printf("isascii found dif at %c - %d - %d\n", c, isascii(c), ft_isascii(c));
		if (isprint(c) != ft_isprint(c))
			printf("isprint found dif at %c (%d) - %d - %d\n", c, c, isprint(c), ft_isprint(c));
		if (toupper(c) != ft_toupper(c))
			printf("toupper found dif at %c - %d - %d\n", c, toupper(c), ft_toupper(c));
		if (tolower(c) != ft_tolower(c))
			printf("tolower found dif at %c - %d - %d\n", c, tolower(c), ft_tolower(c));
		c++;
	}

	char	*s = "this is test how many to count (35)\n";
	int	number = 126;
	char	*num = "\0";

	printf("strlen : total num is : %lu and ft_strlen is : %d\n", strlen(s), ft_strlen(s));
	printf("%s\n", strchr(num, number));
}
