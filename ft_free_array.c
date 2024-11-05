/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:09:08 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/05 10:35:31 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_array(char **strarray, size_t size);

void	*ft_free_array(char **strarray, size_t size)
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
