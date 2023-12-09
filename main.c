/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:22:10 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/09 20:59:36 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "types.h"
#include "dict_parse.h"

int	main(void)
{
	struct s_dict	d1[100];
	char			bf[1024];
	ssize_t			n;

	n = ft_get_file(bf, "numbers.dict");

	//printf("Dict entry 0: {number: %s}: {word: %s}\n", d1[0].number, d1[0].word);

	ft_tokenize_number(bf, n);
	return (0);
}
