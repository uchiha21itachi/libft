/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:55:05 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/06 17:55:07 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_words(char const *s, char c)
{
	int	i;
	int	size;
	int	counter;

	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		counter = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			counter++;
		}
		if (counter != 0)
			size++;
		if (s[i] != '\0')
			i++;
	}
	return (size);
}

static	char	*fill_string(char const *s, int j, int counter)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc((counter + 1) * sizeof(char));
	if (ptr == 0)
		return (NULL);
	else
	{
		while (counter > 0)
		{
			ptr[i++] = s[j++];
			counter--;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

static	char	**fill_all(char **p, char const *s, char c)
{
	int i;
	int j;
	int k;
	int counter;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = i;
		counter = 0;
		while (s[i] != c && s[i] != '\0')
		{
			counter++;
			i++;
		}
		if (counter != 0)
			p[k++] = fill_string(s, j, counter);
		if (s[i] != '\0')
			i++;
	}
	p[k] = NULL;
	return (p);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	char	**p;

	if (!s)
		return (NULL);
	i = count_words(s, c);
	if (!(p = (char **)malloc((i + 1) * sizeof(char *))))
		return (NULL);
	p = fill_all(p, s, c);
	return (p);
}
