/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurlybe <mnurlybe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:00:27 by mnurlybe          #+#    #+#             */
/*   Updated: 2023/01/31 17:00:42 by mnurlybe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*get_tmp(int fd, char *tmp);
char	*get_line(char *tmp);
char	*clean_tmp(char *tmp);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *s);
int		ft_strchr(char *s, char c);
char	*ft_strjoin(char *tmp, char *buf);

#endif