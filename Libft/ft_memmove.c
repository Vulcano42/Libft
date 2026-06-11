/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:35:29 by thialima          #+#    #+#             */
/*   Updated: 2026/06/10 13:54:37 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)

{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d > s)
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int main (void)
{
	char *src = "cinco";
	char dest[10];
	printf ("%s",ft_memmove(dest,src,5));
	return (0);
}
*/
