/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:01:49 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/11 20:16:23 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	**ft_lstcut(t_list **lst, void (*del)(void *), int start, int end);

t_list	**ft_lstcut(t_list **lst, void (*del)(void *), int start, int end)
{
	t_list	*current;
	t_list	*last;
	t_list	*next;
	int		i;

	i = 0;
	current = *lst;
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
		current = next;
		i++;
	}
	if (i <= end)
		last->next = NULL;
	return (lst);
}
