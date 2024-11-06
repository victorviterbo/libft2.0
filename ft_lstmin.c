/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:40:37 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/06 16:24:49 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_lstmin(t_list **lst, int dtype);

float	ft_lstmin(t_list **lst, int dtype)
{
	float	min;
	t_list	*current;

	if (!lst)
		return (0);
	min = FLT_MAX;
	current = *lst;
current = *lst;
	while (current)
	{
		if (dtype == INT)
			min = ft_min(min, (float)*(int *)current->content);
		else if (dtype == FLOAT)
			min = ft_min(min, (float)*(float *)current->content);
		current = current->next;
	}
	return (min);
}
