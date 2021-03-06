/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 05:46:42 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/08 05:46:45 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	l;

	l = 0;
	if (s != 0)
	{
		l = write(fd, s, ft_strlen(s));
		l = write(fd, "\n", 1);
	}
}
