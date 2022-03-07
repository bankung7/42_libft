#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "libft.h"

int	main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	printf("%s\n", ft_strtrim(s1, " \n\t"));
	char *s2 = "Hello";
	printf("%s\n", ft_strtrim(s2, " \n\t"));
	char *s3 = " \n\t\t  \t\n \n \n\n\t\t";
	printf("%s\n", ft_strtrim(s3, " \n\t"));
	char *s4 = "  \t \t \n   \n\n\n\t";
	printf("%s\n", ft_strtrim(s4, " \n\t"));

}
