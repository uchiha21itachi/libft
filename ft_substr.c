/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 00:09:52 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/18 22:58:39 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	int				i;
	unsigned int	j;
	size_t			length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (len > length)
		return (NULL);
	if (!(p = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	j = 0;
	i = 0;
	while (j < len && start < length)
	{
		p[i++] = s[start++];
		j++;
	}
	p[i] = '\0';
	return (p);
}
