#include <stdio.h>

int ft_isascii(int c)

{
	return (c >= 0 && c <= 127);
}

int main (void)

{
	printf ("%d", ft_isascii(1));
}
