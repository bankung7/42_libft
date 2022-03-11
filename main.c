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
	char *s = 0;
	printf("%s\n", ft_memchr(s, 's', 3));
	return (0);
}
