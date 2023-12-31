/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:51:15 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/10 22:48:24 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t	ft_read_file(char *buf, char *filename, size_t bufsize, int *fd)
{
	ssize_t	bytes_read;

	*fd = open(filename, O_RDONLY);
	bytes_read = read(*fd, buf, bufsize);
	return (bytes_read);
}

int	ft_count_entries(char *buf, ssize_t bytes_read)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < bytes_read)
	{
		if (buf[i] == '\n')
			++count;
		++i;
	}
	return (count);
}
