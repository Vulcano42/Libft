/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:35:29 by thialima          #+#    #+#             */
/*   Updated: 2026/06/24 06:27:30 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
