#include <stdio.h>


void *ft_memset (void *s, int c, size_t n)

{
	unsigned char	*p;
	size_t	i;

	p = (unsigned char*) s;
	i = 0;
	while(i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return(s);

}

 int main (void)

{
	char str[10];

	ft_memset(str,'A',3);
	str[3] = '\0';

	printf("%s",str);
}
