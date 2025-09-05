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

char	*get_store(int fd, char *store)
{
	int		byte_count;
	char	*buff;

	buff = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	byte_count = 1;
	while (!(ft_strchr(store, '\n')) && byte_count != 0)
	{
		byte_count = read(fd, buff, BUFFER_SIZE);
		if (byte_count < 0)
		{
			free(buff);
			free(store);
			return (NULL);
		}
		buff[byte_count] = 0;
		store = ft_strjoin(store, buff);
	}
	free(buff);
	return (store);
}

char	*get_aline(char *store)
{
	char	*line;
	int		i;

	i = 0;
	if (store[0] == 0)
		return (NULL);
	while (store[i] && store[i] != '\n')
		i ++;
	line = ft_calloc(sizeof(char), (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (store[i] && store[i] != '\n')
	{
		line[i] = store[i];
		i ++;
	}
	if (store[i] == '\n')
	{
		line[i] = store[i];
		i ++;
	}
	line[i] = '\0';
	return (line);
}

char	*update_store(char *store)
{
	int		i;
	int		upd_index;
	char	*upd_store;

	i = 0;
	while (store[i] && store[i] != '\n')
		i ++;
	if (!store[i])
	{
		free(store);
		return (NULL);
	}
	upd_store = malloc(sizeof(char) * (ft_strlen(store) - i + 1));
	if (!upd_store)
	{
		free(upd_store);
		return (NULL);
	}
	i ++;
	upd_index = 0;
	while (store[i])
		upd_store[upd_index++] = store[i++];
	upd_store[upd_index] = '\0';
	free(store);
	return (upd_store);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*store;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	store = get_store(fd, store);
	if (!store)
		return (NULL);
	line = get_aline(store);
	store = update_store(store);
	return (line);
}
