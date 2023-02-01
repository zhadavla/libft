/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:55:51 by vzhadan           #+#    #+#             */
/*   Updated: 2023/02/01 18:57:54 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
// string\nanother
// 15 - 6 = 9
#include <string.h>

/*
 *	Reads to the buffer and uppends buffer to uf_line (aka unfinished line)
 *	till the '\n' shows up, then with get_lefted_str() function 
 *	finds characters that located after the '\n' and writes them to {*lefted string}.
 *	Returns line getted from {fd}, that needs to be truncated ('\n' character is still there..)
 *	needs to be freed, 'cause malloc was used
*/
char	*get_unfinised_line(int fd, char **lefted)
{
	char	*uf_line;
	char	*buffer;
	int		bytes_read;
	
	uf_line = (char *)malloc(sizeof(*uf_line) * 1);
	*uf_line = 0;
	if (*lefted)
		uf_line = ft_strjoin(uf_line, *lefted);
	buffer = (char *)malloc(sizeof(*buffer) * (BUFFER_SIZE + 1));
	while (!ft_strchr(uf_line, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		*(buffer + BUFFER_SIZE) = 0;
		// printf("buffer {%s}\n", buffer);
		if (!bytes_read)
			break;
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		uf_line = ft_strjoin(uf_line, buffer);
		// printf("ufline {%s}\n", uf_line);
	}
	get_lefted_str(uf_line, lefted);
	free(buffer);
	return (uf_line);
}

/*
 *	Returns substring of {uf_line} after the '\n' character
 *	{*lefted} needs to be freed, 'cause malloc was used
*/
void	get_lefted_str(char *uf_line, char **lefted)

{
	size_t	num_of_char_befor_eol;
	size_t	i;
	size_t	len;
	
	num_of_char_befor_eol = 0;
	while (uf_line[num_of_char_befor_eol] && uf_line[num_of_char_befor_eol] != '\n')
		num_of_char_befor_eol++;

	len = ft_strlen(uf_line);
	// printf("%ld\n", len - num_of_char_befor_eol);
	if (!*lefted)
		*lefted = (char *)malloc(sizeof(**lefted) * (len - num_of_char_befor_eol));
	i = 0;
	num_of_char_befor_eol++;
	while (uf_line[num_of_char_befor_eol])
	{
		(*lefted)[i] = uf_line[num_of_char_befor_eol];
		i++;
		num_of_char_befor_eol++;
	}
	(*lefted)[i] = '\0';
	// printf("lefted {%s}\n", *lefted);
}

/*
 *	Returns substring of {uf_line} up to the '\n' character
 *	needs to be freed, 'cause malloc was used
*/
char *cut_unfin_line(char *uf_line)
{
	char 	*f_line;
	size_t	num_of_char_befor_eol;
	size_t	i;

	num_of_char_befor_eol = 0;
	while (uf_line[num_of_char_befor_eol] && uf_line[num_of_char_befor_eol] != '\n')
		num_of_char_befor_eol++;
	f_line = (char *)malloc(sizeof(*f_line) * (num_of_char_befor_eol + 1));
	i = 0;
	while (uf_line[i] && uf_line[i] != '\n')
	{
		f_line[i] = uf_line[i];
		i++;
	}
	f_line[i] = '\0';
	free(uf_line);
	return (f_line);
}

/*
 *	Reads one line from file descriptor
 *	has static field {lefted} where string readed after the '\n' character located
 *	needs to be freed, 'cause malloc was used
*/
char	*get_next_line(int fd)
{
	static char	*lefted;
	char 		*uf_line;

	uf_line =  get_unfinised_line(fd, &lefted);
	return (cut_unfin_line(uf_line));
}