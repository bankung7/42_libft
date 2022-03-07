#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "libft.h"

int	main(void)
{
	t_list	**n;
	t_list	*p;

	p = malloc(sizeof(t_list));
	p->content = "1";
	p->next = 0;

	*n = p;
	p = malloc(sizeof(t_list));
	p->content = "2";
	p->next = 0;

	(*n)->next = p;

	p = malloc(sizeof(t_list));
	p->content = "3";
	p->next = 0;


	while (n)
	{
		printf("%s\n", (char *)(&(*n)->content));
		n = &(*n)->next;
	}
}
