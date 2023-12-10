/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:22:10 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/10 23:20:26 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "types.h"
#include "dict_parse.h"
#include "strings.h"

// this is bad
#define CHUNK_SIZE 65536
#define	MAX_NUMBER_SIZE 64
#define MAX_WORD_SIZE 128

int	main(void)
{
	char	buffer[CHUNK_SIZE];
	ssize_t n;
	ssize_t	br;
	int		i, x;
	int		fd;

	int	max_entries;

	n = 0;
	i = 0;
	x = 0;

	br = ft_read_file(buffer, "numbers.dict", CHUNK_SIZE, &fd);
	max_entries = ft_count_entries(buffer, br);

	//printf("maximum entries: %d\n", max_entries);
	
	struct s_dict	d1[max_entries];

	while (n < br)
	{
		// arbitrary sizes
		d1[i].number = malloc(MAX_NUMBER_SIZE);
		d1[i].word = malloc(MAX_WORD_SIZE);

		// reset character counter
		x = 0;
		
		while (buffer[n] >= '0' && buffer[n] <= '9')
		{
			d1[i].number[x++] = buffer[n++];
		}
		d1[i].number[x] = '\0';

		while (buffer[n] == ' ' || buffer[n] == ':')
		{
			++n;
		}

		// reset character counter
		x = 0;

		while (buffer[n] != '\n')
		{
			d1[i].word[x++] = buffer[n++];
		}
		d1[i].word[x] = '\0';

		// skip newline
		++n;

		// next dict entry
		++i;
	}

	//printf("Dictionary\n");

	//printf("Entry index %d\nNumber: %s\nWord: %s\n", 23, d1[23].number, d1[23].word);

	char	test[] = "52";
	int		j = 0;
	int		not_found = 1;

	while (j < max_entries)
	{
		if (ft_strcmp(test, d1[j].number) == 0)
		{
			ft_putstr(d1[j].word);
			not_found = 0;
			break;
		}
		++j;
	}

	if (not_found)
		ft_putstr("Dict Error\n");

	// free memory
	for (int _ = 0; _ < i; ++_)
	{
		free(d1[_].number);
		free(d1[_].word);
	}

	// safe memory??
	close(fd);

	return (0);
}
