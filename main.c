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
	char	s[] = "aaabcabcd";
	char	n[] = "aabc";

	printf("0. %s\n", strnstr(s, n, -1));
	printf("0. %s\n\n", ft_strnstr(s, n, -1));

	printf("1. %s\n", strnstr(s, "aaabc", 5));
	printf("1. %s\n\n", ft_strnstr(s, "aaabc", 5));

	printf("2. %s\n", strnstr(s, "abcd", 9));
	printf("2. %s\n\n", ft_strnstr(s, "abcd", 9));

	printf("3. %s\n", strnstr(s, "a", 1));
	printf("3. %s\n\n", ft_strnstr(s, "a", 1));

	printf("11. %s\n", strnstr(s, "cd", 8));
	printf("11. %s\n", ft_strnstr(s, "cd", 8));
}
