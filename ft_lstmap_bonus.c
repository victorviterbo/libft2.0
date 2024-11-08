/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:34:45 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/04 12:59:50 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	void	*fcontent;

	if (!lst)
		return (NULL);
	fcontent = f(lst->content);
	if (!fcontent)
		return (NULL);
	new_lst = ft_lstnew(fcontent);
	if (!new_lst)
		return (free(fcontent), NULL);
	current = new_lst;
	while (lst->next)
	{
		lst = lst->next;
		fcontent = f(lst->content);
		if (!fcontent)
			return (ft_lstclear(&new_lst, del), NULL);
		current->next = ft_lstnew(fcontent);
		if (!(current->next))
			return (ft_lstclear(&new_lst, del), free(fcontent), NULL);
		current = current->next;
	}
	return (new_lst);
}
