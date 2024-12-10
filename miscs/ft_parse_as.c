/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_as.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:26:25 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/10 10:19:29 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

double	ft_parse_as(void *ptr, int dtype);

double	ft_parse_as(void *ptr, int dtype)
{
	double	val;

	if (dtype == SHORT)
		val = (double)*(short *)ptr;
	else if (dtype == INT)
		val = (double)*(int *)ptr;
	else if (dtype == FLOAT)
		val = (double)*(float *)ptr;
	else if (dtype == DOUBLE)
		val = (double)*(double *)ptr;
	else
		val = 0;
	return (val);
}
