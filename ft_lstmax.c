/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:30:28 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/06 17:29:59 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_lstmax(t_list **lst, int dtype);

float	ft_lstmax(t_list **lst, int dtype)
{
	float	max;
	t_list	*current;

	if (!lst)
		return (0);
	max = -FLT_MAX;
	current = *lst;
	while (current)
	{
		if (dtype == SHORT)
			max = ft_max(max, (double)*(short *)current->content);
		else if (dtype == INT)
			max = ft_max(max, (double)*(int *)current->content);
		else if (dtype == FLOAT)
			max = ft_max(max, (double)*(float *)current->content);
		else if (dtype == DOUBLE)
			max = ft_max(max, (double)*(double *)current->content);
		current = current->next;
	}
	return (max);
}
