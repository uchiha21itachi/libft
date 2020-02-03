/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 22:26:39 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/03 22:28:28 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t i;
	size_t j;
	size_t result;

	i = 0;
	j = 0;
	result = 0;
	while (dst[i] != '\0')
		i++;
	while (src[result] != '\0')
		result++;
	if (siz <= i)
		result += siz;
	else
		result += i;
	while (src[j] != '\0' && (i + 1) < siz)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (result);
}
