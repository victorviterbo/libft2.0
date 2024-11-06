/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:30:28 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/06 18:09:21 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_lstmax(t_list **lst, int dtype);

double	ft_lstmax(t_list **lst, int dtype)
{
	double	max;
	double	val;
	t_list	*current;
	bool	first;

	if (!lst || !*lst)
		return (0);
	current = *lst;
	first = true;
	max = 0;
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
		max = max + (first) * val;
		first = false;
		max = ft_max(max, val);
		current = current->next;
	}
	return (max);
}
