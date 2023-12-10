/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:00:13 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/10 23:11:05 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		++str;
	}
}
