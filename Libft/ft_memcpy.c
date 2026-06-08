/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:32:48 by thialima          #+#    #+#             */
/*   Updated: 2026/06/08 18:32:57 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)

{
	unsigned char	*p;
	unsigned char	*o;
	size_t			i;

	p = (unsigned char *) dest;
	o = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		p[i] = o[i];
		i++;
	}
	return (dest);
}
/*
int main (void)

{	
	char	dest[10];
	char	*src = "cinco";
	ft_memcpy(dest,src,3);
	printf ("\n%s",dest);
	return (0);
}
*/
