/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 03:24:39 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/08 03:24:45 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	char	*p;
	int		i;

	length = 0;
	i = 0;
	if (s == 0 || !f)
		return (NULL);
	while (s[length] != '\0')
		length++;
	p = (char *)malloc((length + 1) * sizeof(char));
	if (p == 0)
		return (NULL);
	while (i < length)
	{
		p[i] = f(i, (char)s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
