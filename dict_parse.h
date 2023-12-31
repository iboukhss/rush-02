/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:49:11 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/10 22:19:56 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_PARSE_H
# define DICT_PARSE_H

#include <stdlib.h>

ssize_t	ft_read_file(char *buf, char *filename, size_t bufsize, int *fd);
int	ft_count_entries(char *buf, ssize_t bytes_read);

#endif
