/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_isin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:00:52 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/09 15:18:43 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_isin(t_list **lst, void *elem, int size);

t_list	*ft_lst_isin(t_list **lst, void *elem, int size)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = *lst;
	while (current)
	{
		if (!elem && !current->content)
			return (current);
		if (elem && size == -1)
		{
			if (!ft_strncmp(current->content, elem, ft_strlen(elem)))
				return (current);
		}
		else if (elem)
		{
			if (!ft_memcmp(current->content, elem, size))
				return (current);
		}
		current = current->next;
	}
	return (NULL);
}
