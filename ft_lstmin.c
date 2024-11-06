/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:40:37 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/06 18:10:11 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_lstmin(t_list **lst, int dtype);

double	ft_lstmin(t_list **lst, int dtype)
{
	double	min;
	double	val;
	t_list	*current;
	bool	first;

	if (!lst || !*lst)
		return (0);
	current = *lst;
	first = true;
	min = 0;
	while (current)
	{
		if (dtype == SHORT)
			val = (double)*(short *)current->content;
		else if (dtype == INT)
			val = (double)*(int *)current->content;
		else if (dtype == FLOAT)
			val = (double)*(float *)current->content;
		else if (dtype == DOUBLE)
			val = (double)*(double *)current->content;
		min = min + (first) * val;
		first = false;
		min = ft_min(min, val);
		current = current->next;
	}
	return (min);
}
