/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 19:20:30 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/03 19:53:14 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *need, size_t len)
{
	int		hay_l;
	int		nee_l;
	int		h;
	int		n;
	size_t	j;

	hay_l = ft_strlen(haystack);
	nee_l = ft_strlen(need);
	h = -1;
	n = 0;
	if (nee_l == 0)
		return ((char *)haystack);
	while (++h < hay_l && len > 0)
	{
		j = -1;
		while ((haystack[h + n] == need[n]) && (need[n] != '\0') && ++j < len)
		{
			if (n == nee_l - 1)
				return ((char *)haystack + h);
			n++;
		}
		n = 0;
		len--;
	}
	return (NULL);
}
