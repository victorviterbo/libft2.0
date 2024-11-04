/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:40:37 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/04 15:43:09 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstmin(t_list **lst);

int	ft_lstmin(t_list **lst)
{
	int		min;
	t_list	*current;

	min = INT_MAX;
	current = *lst;
	while (current)
	{
		min = ft_min(min, *(int *)current->content);
		current = current->next;
	}
	return (min);
}
