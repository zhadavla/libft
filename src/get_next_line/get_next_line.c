/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzhadan <vzhadan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:52:26 by vzhadan           #+#    #+#             */
/*   Updated: 2023/02/07 14:00:46 by vzhadan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 *	Reads from file {fd} until '\n' character shows up
*/
char	*get_input(int fd, char *lefted_input)
{
	char	*buffer;
	int		bytes_read;

	if (!lefted_input)
		lefted_input = ft_calloc(1, sizeof(*lefted_input));
	buffer = malloc(sizeof(*lefted_input) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(lefted_input, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		if (bytes_read == -1)
		{
			free(lefted_input);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		lefted_input = ft_strjoin(lefted_input, buffer);
	}
	free(buffer);
	return (lefted_input);
}

/*
 *	Removes line from {lefted_input}
 *	if only that line was in the {lefted_input}
 *	free {lefted_input}
*/
char	*clean_lefted_input(char *lefted_input)
{
	char	*new_lefted_input;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	while (lefted_input[i] && lefted_input[i] != '\n')
		i++;
	if (lefted_input[i] == '\0')
	{
		free(lefted_input);
		return (NULL);
	}
	i++;
	len = ft_strlen(lefted_input);
	new_lefted_input = (char *)ft_calloc((len - i + 1), sizeof(*lefted_input));
	if (!new_lefted_input)
		return (NULL);
	j = 0;
	while (lefted_input[i] != '\0')
		new_lefted_input[j++] = lefted_input[i++];
	free (lefted_input);
	return (new_lefted_input);
}

/*
 *	Cuts the line. 
 *	Reads through the line until '\n' or '\0' chararcters shows up.
*/
char	*cut_line(char *lefted_input)
{
	char	*line;
	size_t	i;
	size_t	j;

	if (!(*lefted_input))
		return (NULL);
	j = 0;
	while (lefted_input[j] && lefted_input[j] != '\n')
		j++;
	line = (char *)ft_calloc(j + 2, sizeof(*line));
	if (!line)
		return (NULL);
	i = 0;
	while (lefted_input[i] && lefted_input[i] != '\n')
	{
		line[i] = lefted_input[i];
		i++;
	}
	if (lefted_input[i] == '\0')
		line[i] = '\0';
	else
		line[i] = '\n';
	return (line);
}

/*
 *	Function that reads one line from file.
 *	{lefted_input} is static string that exists 
 *	all lifetime of the program
*/
char	*get_next_line(int fd)
{
	static char	*lefted_input;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	lefted_input = get_input(fd, lefted_input);
	if (!lefted_input)
		return (NULL);
	line = cut_line(lefted_input);
	lefted_input = clean_lefted_input(lefted_input);
	return (line);
}
