/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:51:15 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/09 20:56:48 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t	ft_get_file(char buffer[], char *filename)
{
	int		fd;
	ssize_t	bytes_read;

	// open() returns the file descriptor (int)
	fd = open(filename, O_RDONLY);

	// read() returns a ssize_t (signed size_t)
	bytes_read = read(fd, buffer, 1024);
	return (bytes_read);
}

void	ft_tokenize_number(char *buffer, ssize_t bufsize)
{
	char	nb_token[10];
	
	ssize_t	i = 0;
	int		x = 0;
	int		is_word = 1;

	while (i < bufsize && is_word == 1)
	{
		if (buffer[i] == ':')
			is_word = 0;
		else
			nb_token[x] = buffer[i];
		++i;
		++x;
	}
	printf("nb_token: %s\n", nb_token);
}
