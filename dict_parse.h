/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:49:11 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/09 20:57:37 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_PARSE_H
# define DICT_PARSE_H

int	ft_get_file(char buffer[], char *filename);
void	ft_tokenize_number(char *buffer, ssize_t bufsize);

#endif
