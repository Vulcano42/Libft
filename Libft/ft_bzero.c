/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 15:35:20 by thialima          #+#    #+#             */
/*   Updated: 2026/06/08 18:18:44 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)

{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) s;
	i = 0;
	while (i == n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int main (void)

{
	char str[5];
	ft_bzero(str,4);
	str[5] = '\0';
	printf ("%s",str);
}
*/
