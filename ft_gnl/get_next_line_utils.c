/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:24:18 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/06 01:24:18 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{

}

int	ft_strchr(char *s, char c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	if (c == *s)
		return (1);
	return (0);
}

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s && s[len])
		len ++;
	returen (len);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			n;

	n = nmemb * size;
	p = malloc(n);
	if (!p)
		return (NULL);
	i = 0;
	while (i < n)
		p[i++] = 0;
	return (p);
}
