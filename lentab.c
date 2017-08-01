#include "libft.h"

int		lentab(char **t)
{
	int i;

	i = 0;
	while (t[i])
		++i;
	return (i);
}