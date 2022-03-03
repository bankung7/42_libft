#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "libft.h"

int	main(void)
{
	char *s1 = "lorem ipsum";
	char *s2 = " dolor sit amet";

	printf("%s\n", ft_strjoin(s1, s2));
}
