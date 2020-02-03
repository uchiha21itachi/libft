/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:38:16 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/05 01:38:17 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_trim_set(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (0);
		set++;
	}
	return (1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	if (s1 == 0 || set == NULL || !(ans = (char *)malloc((ft_strlen(s1) + 1))))
		return (NULL);
	while (*s1)
	{
		if (check_trim_set(set, *s1) && i == 0)
			ans[i++] = *s1;
		else if (i > 0)
		{
			if (!check_trim_set(set, *s1))
				counter++;
			else
				counter = 0;
			ans[i++] = *s1;
		}
		s1++;
	}
	ans[i - counter] = '\0';
	return (ans);
}
