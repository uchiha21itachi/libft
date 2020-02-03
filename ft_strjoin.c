/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 00:40:30 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/27 17:17:56 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	size_t	i;
	char	*p;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	p = (char *)malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (p == 0)
		return (NULL);
	else
	{
		while (i < size_s1)
			p[i++] = *s1++;
		while (i < (size_s2 + size_s1))
			p[i++] = *s2++;
		p[i] = '\0';
	}
	return (p);
}
