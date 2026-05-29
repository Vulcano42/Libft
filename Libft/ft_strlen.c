#include <stdio.h>

size_t ft_strlen(char *s)

{
	size_t	i;

	i = 0;
	while (s[i])
	{
		s++;
		i++;
	}
	return (i);
}

int main (void)

{
	printf ("%zu",ft_strlen("cinco"));
	return (0);
}
