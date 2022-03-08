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
	char **str = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ",' ');
	int	i;

	i=0;
	while (str[i] != 0)
	{
		ft_print(str[i]);
		i++;
		write(1, "\n", 1);
	}
}
