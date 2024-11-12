/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:01:49 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/12 08:00:02 by vviterbo         ###   ########.fr       */
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
	while (current && current->next)
	{
		printf("LALA\n");
		printf("i = %i\n", i);
		if (i == start - 1)
			last = current;
		else if (start <= i && i < end)
			ft_lstdelone(current, del);
		else if (i == end && start)
			last->next = current;
		else if (i == end)
			*lst = current;
		printf("i 2 = %i\n", i);
		printf("%i\n", i);
		printf("%p\n", current);
		i++;
		printf("%p\n", current);
		current = next;
	}
	if (i == start - 1)
		last = current;
	else if (start <= i && i < end)
		ft_lstdelone(current, del);
	else if (i == end && start)
		last->next = current;
	else if (i == end)
		*lst = current;
	i++;
	if (i <= end)
		last->next = NULL;
	return ;
}
