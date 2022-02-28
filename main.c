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
	printf("0. 1 : %d : %d\n", atoi("1"), ft_atoi("1"));
	printf("1. 1234 : %d : %d\n", atoi("1234"), ft_atoi("1234"));
	printf("2. a : %d : %d\n", atoi("a"), ft_atoi("a"));
	printf("3. 42a : %d : %d\n", atoi("42a"), ft_atoi("42a"));
	printf("3. a42 : %d : %d\n", atoi("a42"), ft_atoi("a42"));
	printf("4. NULL : %d : %d\n", atoi(""), ft_atoi(""));
	printf("5. +1 : %d : %d\n", atoi("+1"), ft_atoi("+1"));
	printf("6. -1 : %d : %d\n", atoi("-1"), ft_atoi("-1"));
	printf("7. +-+1 : %d : %d\n", atoi("+-+1"), ft_atoi("+-+1"));
	printf("8. +-+1i : %d : %d\n", atoi("+-+1i"), ft_atoi("+-+1i"));
	printf("9. +-+i1 : %d : %d\n", atoi("+-+i1"), ft_atoi("+-+i1"));
	printf("10. \t\t\t42 : %d : %d\n", atoi("\t\t\t42"), ft_atoi("\t\t\t42"));
	printf("11. \t\t\t-42 : %d : %d\n", atoi("\t\t\t-42"), ft_atoi("\t\t\t-42"));
	printf("12. -\t\t\t42 : %d : %d\n", atoi("-\t\t\t42"), ft_atoi("-\t\t\t42"));
}
