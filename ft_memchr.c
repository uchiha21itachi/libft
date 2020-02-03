/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 03:24:18 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/01 03:29:03 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *p;

	p = (char *)s;
	while (n > 0)
	{
		if (*(unsigned char *)p == (unsigned char)c)
			return (p);
		else
		{
			p++;
			n--;
		}
	}
	return (NULL);
}
