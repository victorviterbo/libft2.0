/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:01:49 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/12 11:22:11 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstcut(t_list **lst, void (*del)(void *), int start, int end);

void	ft_lstcut(t_list **lst, void (*del)(void *), int start, int end)
{
	t_list	*current;
	t_list	*last;
	t_list	*next;
	int		i;

	i = 0;
	if (!lst)
		return ;
	current = *lst;
	last = NULL;
	while (current)
	{
		next = current->next;
		if (i == start - 1)
			last = current;
		else if (start <= i && i < end)
			ft_lstdelone(current, del);
		else if (i == end && start)
			last->next = current;
		else if (i == end)
			*lst = current;
		i++;
		current = next;
	}
	if (i < end && last)
		last->next = NULL;
	return ;
}
