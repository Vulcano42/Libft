#include <stdio.h>

int ft_isnumeric(int c)

{
	return ((c >= 0 && c <= 9));
}

int main (void)

{
	printf ("%d",ft_isnumeric(1));
}
