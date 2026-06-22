/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:43:45 by thialima          #+#    #+#             */
/*   Updated: 2026/06/21 23:16:02 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)

{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main (void)

{
	printf ("%zu", ft_strlen("cinco"));
	return (0);
}
*/
