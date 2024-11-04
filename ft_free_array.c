/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:09:08 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/04 16:11:12 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_array(char **strarray, size_t size);

void	*free_array(char **strarray, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(*(strarray + i));
		i++;
	}
	free(strarray);
	return (NULL);
}
