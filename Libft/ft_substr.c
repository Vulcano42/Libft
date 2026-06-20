/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:38:47 by thialima          #+#    #+#             */
/*   Updated: 2026/06/20 00:03:25 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char	*str)

{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	i = start;
	j = 0;
	if (start >= s_len)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (len > (s_len - start))
		len = s_len - start;
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[i] && j < len)
		p[j++] = s[i++];
	p[j] = '\0';
	return (p);
}
