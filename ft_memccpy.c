/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 01:32:54 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/01 02:53:43 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	dest = (char*)d;
	src = (char*)s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)src == (unsigned char)c)
		{
			*dest++ = *src++;
			return (dest);
		}
		else
			*dest++ = *src++;
		i++;
	}
	return (NULL);
}
