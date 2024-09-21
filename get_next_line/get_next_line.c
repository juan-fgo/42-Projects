/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-fgo <juan-fgo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 23:41:49 by juan-fgo          #+#    #+#             */
/*   Updated: 2024/09/14 11:19:34 by juan-fgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer);
static char	*_set_line(char *line);
static char	*ft_strchr(char *s, int c);
static char	*_concat_left_c(char *left_c, char *buffer);

char	*get_next_line(int fd)
{
	static char	*left_c;
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	line = _fill_line_buffer(fd, left_c, buffer);
	free(buffer);
	if (!line)
	{
		free(left_c);
		left_c = NULL;
		return (NULL);
	}
	left_c = _set_line(line);
	return (line);
}

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer)
{
	ssize_t	b_read;

	b_read = read(fd, buffer, BUFFER_SIZE);
	while (b_read > 0)
	{
		buffer[b_read] = '\0';
		left_c = _concat_left_c(left_c, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
		b_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (b_read == -1)
		return (NULL);
	else
		return (left_c);
}

static char	*_concat_left_c(char *left_c, char *buffer)
{
	char	*tmp;

	if (!left_c)
		left_c = ft_strdup("");
	tmp = left_c;
	left_c = ft_strjoin(tmp, buffer);
	free(tmp);
	return (left_c);
}

static char	*_set_line(char *line)
{
	char	*left_c;
	ssize_t	i;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0' || line[i + 1] == '\0')
		return (NULL);
	left_c = ft_substr(line, i + 1, ft_strlen(line) - i - 1);
	line[i + 1] = '\0';
	return (left_c);
}

static char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	return (NULL);
}
