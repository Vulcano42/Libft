/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 01:58:08 by thialima          #+#    #+#             */
/*   Updated: 2026/06/15 18:43:37 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)

{
	const char	*start;

	start = s;
	while (*s)
		s++;
	while (s >= start)
	{
		if (*s == (char) c)
			return ((char *) s);
		s--;
	}
	return (NULL);
}
