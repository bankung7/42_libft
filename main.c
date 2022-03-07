#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "libft.h"

int	main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";

	printf("%s\n", ft_strtrim(s1, " \n\t"));
}
