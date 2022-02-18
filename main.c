#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
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

	char	*s0 = "\0";
	char	*s1 = " ";
	char	*s2 = "abcdefghijklmnopqrstuvwxyz\n";

	printf("strlen : total num is : %lu and ft_strlen is : %d\n", strlen(s0), ft_strlen(s0));
	printf("strlen : total num is : %lu and ft_strlen is : %d\n", strlen(s1), ft_strlen(s1));
	printf("strlen : total num is : %lu and ft_strlen is : %d\n", strlen(s2), ft_strlen(s2));

	srand(time(NULL));
	char memset1[50];
	char memset2[50];
	strcpy(memset1, s2);
	strcpy(memset2, s2);
	int ran = rand() % 30;
	printf("memset : %s\n", memset(memset1, '%', ran));
	printf("ft_memset : %s\n", ft_memset(memset2, '%', ran));
	bzero(memset1, 3);
	ft_bzero(memset2, 3);
	printf("bzero : %s\n", memset1);
	printf("ft_bzero : %s\n", memset2);
}
