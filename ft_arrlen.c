/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:07:59 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/04 16:08:53 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	arrlen(char **array);

size_t	arrlen(char **array)
{
	size_t	i;

	i = 0;
	while (*(array + i))
        i++;
    return (i);
}
