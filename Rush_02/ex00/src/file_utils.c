/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:01:43 by cagil             #+#    #+#             */
/*   Updated: 2025/03/09 14:46:41 by cagil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	dict_error(void);

int	open_file(char *filename)
{
	int	fd;

	fd = open (filename, O_RDONLY);
	if (fd == -1)
		return (0);
	return (fd);
}

char	*read_file(int fd)
{
	char	*text;
	ssize_t	bytes_read;

	text = (char *)malloc(1024);
	if (text == 0)
		return (0);
	bytes_read = read(fd, text, 1024 -1);
	if (bytes_read == -1)
	{
		free(text);
		return (0);
	}
	text[bytes_read] = '\0';
	return (text);
}

void	close_file(int fd)
{
	close(fd);
}
/*
#include <stdio.h>
int main(void)
{
	int	fd;

	fd = open_file("numbers.dict");
	write (1, read_file(fd), 20);
	close(fd);
	return (0);
}*/
