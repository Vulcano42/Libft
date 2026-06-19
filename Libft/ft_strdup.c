/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 15:46:11 by thialima          #+#    #+#             */
/*   Updated: 2026/06/19 02:08:42 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)

{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	p = malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	while (j < i)
	{
		p[j] = s[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
