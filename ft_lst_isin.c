/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_isin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:00:52 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/05 14:30:18 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_isin(t_list **lst, void *elem, size_t size);

int	ft_lst_isin(t_list **lst, void *elem, size_t size)
{
	t_list	*current;

	if (!lst)
		return (0);
	current = *lst;
	while (current)
	{
		if (size == -1)
		{
			if (!ft_strncmp(current->content, elem, ft_strlen(elem)))
				return (1);
		}
		else
		{
			if (!ft_memcmp(current->content, elem, size))
				return (1);
		}
		current = current->next;
	}
	return (0);
}
