/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:39:46 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/03 19:15:18 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int l;

	l = 0;
	while (s[l])
		l++;
	while (l >= 0)
	{
		if (s[l] == (char)c)
			return ((char*)s + l);
		l--;
	}
	return (NULL);
}
