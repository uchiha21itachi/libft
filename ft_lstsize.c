/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 22:22:38 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/08 22:36:10 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		l;
	t_list	*new;

	l = 0;
	if (!lst)
		return (0);
	new = lst;
	while (new != NULL)
	{
		new = new->next;
		l++;
	}
	return (l);
}
