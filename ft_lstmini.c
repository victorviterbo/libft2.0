/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmini.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:40:37 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/17 22:42:11 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstmini(t_list **lst);

int	ft_lstmini(t_list **lst)
{
	int		min;
	t_list	*current;

	if (!lst || !*lst)
		return (0);
	current = *lst;
	min = current->i;
	current = current->next;
	while (current)
	{
		min = ft_min(min, current->i);
		current = current->next;
	}
	return (min);
}
