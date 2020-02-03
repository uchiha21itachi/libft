/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 04:24:33 by yassharm          #+#    #+#             */
/*   Updated: 2019/10/31 04:56:35 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*s;

	s = b;
	i = 0;
	while (i < len)
	{
		*(unsigned char*)b = (unsigned char)c;
		b++;
		i++;
	}
	return (s);
}
