/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimvutt <slimvut@fpgij;dgj;ds.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:19:20 by slimvutt          #+#    #+#             */
/*   Updated: 2025/09/06 01:19:20 by slimvutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
//------------------------------------------------
# include <stdlib.h>
# include <unistd.h>
//------------------------------------------------
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
//------------------------------------------------
char	*get_next_line(int fd);
char	*get_store(int fd, char *store);
char	*get_aline(char *store);
//------------------------------------------------
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(char *s);
int		ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
//------------------------------------------------
#endif