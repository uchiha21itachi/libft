/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 22:54:26 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/08 22:54:36 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *ls;

	if (!alst)
		return ;
	if (*alst)
		ls = *alst;
	else
	{
		*alst = new;
		return ;
	}
	while (ls->next != NULL)
		ls = ls->next;
	ls->next = new;
}
