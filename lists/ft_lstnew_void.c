/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_void.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:54:17 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/17 20:23:19 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_void(void *content);

t_list	*ft_lstnew_void(void *content)
{
	t_list	*newlst;

	newlst = malloc(sizeof(t_list));
	if (!newlst)
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}