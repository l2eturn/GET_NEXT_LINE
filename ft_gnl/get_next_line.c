/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:24:21 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/06 01:24:21 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_store(int fd,char *store)
{
	int		byte_count;
	char	*buff;

	buff = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	
}
char	*get_next_line(int fd)
{
	char		*line;
	static char	*store;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	//we need to store each charactor to store till we get '\n' by each BUFFER_SIZE 
	store = get_store(fd, store);
}
