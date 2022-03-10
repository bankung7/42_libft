#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "libft.h"

void	ft_print(char const *s)
{
	int	len;
	len = 0;

	while (s[len])
		len++;
	write(1,s,len);
}


int	main(void)
{
	char	**str = ft_split(" 123 ", ' ');

	int	i = 0;
	while (str[i])
		printf("%s\n", str[i++]);

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}
