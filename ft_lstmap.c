/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 23:06:22 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/17 19:07:18 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (!lst || !del)
		return (NULL);
	if (!(temp = ft_lstnew(f(lst->content))))
		return (NULL);
	result = temp;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(temp->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		lst = lst->next;
		temp = temp->next;
	}
	return (result);
}
