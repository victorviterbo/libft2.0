/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:30:28 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/04 15:43:00 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstmax(t_list **lst);

int	ft_lstmax(t_list **lst)
{
	int		max;
	t_list	*current;

	max = INT_MIN;
	current = *lst;
	while (current)
	{
		max = ft_max(max, *(int *)current->content);
		current = current->next;
	}
	return (max);
}
