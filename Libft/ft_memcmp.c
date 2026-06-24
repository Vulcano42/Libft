/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 00:51:37 by thialima          #+#    #+#             */
/*   Updated: 2026/06/24 06:41:15 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*p;
	unsigned char	*s;
	size_t			i;

	p = (unsigned char *) s1;
	s = (unsigned char *) s2;
	i = 0;
	while (i < n && p[i] == s[i])
		i++;
	if (i == n)
		return (0);
	return (p[i] - s[i]);
}
