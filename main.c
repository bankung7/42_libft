#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "libft.h"

int	main(void)
{
	int	c = 0;

	printf("Test isalpha\n");
	while (c <= 127)
	{
		if (isalpha(c) != ft_isalpha(c))
			printf("isalpha found dif at %c - %d - %d\n", c, isalpha(c), ft_isalpha(c));
		c++;
	}

	c = 0;
	printf("Test isdigit\n");
	while (c <= 127)
	{
		if (isdigit(c) != ft_isdigit(c))
			printf("isdigit found dif at %c - %d - %d\n", c, isdigit(c), ft_isdigit(c));
		c++;
	}

	c = 0;
	printf("Test islanum\n");
	while (c <= 127)
	{
		if (isalnum(c) != ft_isalnum(c))
			printf("isalnum found dif at %c - %d - %d\n", c, isalnum(c), ft_isalnum(c));
		c++;
	}

	c = 0;
	printf("Test isascii\n");
	while (c <= 127)
	{
		if (isascii(c) != ft_isascii(c))
			printf("isascii found dif at %c - %d - %d\n", c, isascii(c), ft_isascii(c));
		c++;
	}

	c = 0;
	printf("Test isprint\n");
	while (c <= 127)
	{
		if (isprint(c) != ft_isprint(c))
			printf("isprint found dif at %c (%d) - %d - %d\n", c, c, isprint(c), ft_isprint(c));
		c++;
	}

	c = 0;
	printf("Test toupper\n");
	while (c <= 127)
	{
		if (toupper(c) != ft_toupper(c))
			printf("toupper found dif at %c - %d - %d\n", c, toupper(c), ft_toupper(c));
		c++;
	}

	c = 0;
	printf("Test tolower\n");
	while (c <= 127)
	{
		if (tolower(c) != ft_tolower(c))
			printf("tolower found dif at %c - %d - %d\n", c, tolower(c), ft_tolower(c));
		c++;
	}

	char	*s0 = "\0";
	char	*s1 = " ";
	char	*s2 = "abcdefghijklmnopqrstuvwxyz";
	char	*s3 = "JfsdjUHk KJsdfiuI";

	printf("Test strlen\n");
	if ((int)strlen(s0) != ft_strlen(s0))
		printf("found dif at strlen : %lu and ft_strlen is : %d\n", strlen(s0), ft_strlen(s0));
	if ((int)strlen(s1) != ft_strlen(s1))
		printf("found dif at strlen : %lu and ft_strlen is : %d\n", strlen(s1), ft_strlen(s1));
	if ((int)strlen(s2) != ft_strlen(s2))
		printf("found dif at strlen : %lu and ft_strlen is : %d\n", strlen(s2), ft_strlen(s2));
	if ((int)strlen(s3) != ft_strlen(s3))
		printf("found dif at strlen : %lu and ft_strlen is : %d\n", strlen(s3), ft_strlen(s3));

	printf("Test memset\n");
	srand(time(NULL));
	char memset1[50];
	char memset2[50];
	int ran = rand();
	strcpy(memset1, s2);
	strcpy(memset2, s2);
	memset(memset1, '%', ran % (int)strlen(memset1));
	ft_memset(memset2, '%', ran % (int)strlen(memset2));
	c = 0;
	while (memset1[c] && memset2[c])
	{
		if (memset1[c] != memset2[c])
			printf("memset : %s\n", memset(memset1, '%', ran));
		c++;
	}
	
	strcpy(memset1, s2);
	strcpy(memset2, s2);
	c = ran % 10;
	printf("%d\n", c);
	bzero(memset1, c);
	printf("%c\n", memset1[c - 1]);
	while (memset1[c])
		printf("%c", memset1[c++]);
	printf("\n");

	c = ran % 10;
	ft_memset(memset2, '\0', c);
	printf("%c\n", memset2[c - 1]);
	while (memset2[c])
		printf("%c", memset2[c++]);
}
