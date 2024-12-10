/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:09:08 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/05 18:37:46 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(void **array, int size);

void	ft_free_array(void **array, int size)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (i < size)
	{
		free(*(array + i));
		i++;
	}
	free(array);
	return ;
}
