/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:51:15 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/09 18:01:27 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_show_file(char *filename)
{
	int		dict_file;
	char	buffer[1024];
	ssize_t	bytes_read;

	// useless variables
	int		x;
	ssize_t	i;

	// The return of open() is a file descriptor (int)
	dict_file = open(filename, O_RDONLY);

	// read() returns a ssize_t (signed size_t)
	bytes_read = read(dict_file, buffer, 1024);

	printf("bytes read: %zd\n", bytes_read);
	//printf("%s", buffer);

	i = 0;
	while (i < bytes_read)
	{
		x = buffer[i];
		if (x == '\n')
			printf("\nNEWLINE\n");
		else
			printf("%c", x);
		++i;
	}
}
