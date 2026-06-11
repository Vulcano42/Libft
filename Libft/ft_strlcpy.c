/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thialima <thialima@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:59:42 by thialima          #+#    #+#             */
/*   Updated: 2026/06/10 23:23:07 by thialima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <libft.h>*/
#include <stdio.h>

size_t	ft_strlen (const char *str)

{
	size_t	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)

{
	char		*d;
	const	char	*s;
	size_t				i;

	i = 0;
	d = dest;
	s = src;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize -1 && s[i])
	{
		d[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return	(ft_strlen(src));
}
/*
int main (void)

{
	char dest[10];
	 char	*src = "cinco";

	
	printf("%d",ft_strlcpy(dest,src,5));
}
*/
