/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:07:59 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/05 10:35:16 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_arrlen(char **array);

size_t	ft_arrlen(char **array)
{
	size_t	i;

	i = 0;
	while (*(array + i))
		i++;
	return (i);
}
