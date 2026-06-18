/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 01:26:59 by thialima          #+#    #+#             */
/*   Updated: 2026/06/18 02:12:43 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)

{
	unsigned char	*ptr;
	size_t			i;
	size_t			total;

	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
 int main (void)

{
	int *str = ft_calloc(5,sizeof(int));
	printf("%d\n%d\n%d\n%d\n%d\n Essa foi a ultima saida",
			str[0],str[1],str[2],str[3],str[4],str[5]);
}
*/
