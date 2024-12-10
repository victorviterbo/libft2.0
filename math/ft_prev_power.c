/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prev_power.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:47:56 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/10 10:19:29 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

double	ft_prev_power(double n, int base_size);

double	ft_prev_power(double n, int base_size)
{
	double	sign;
	double	log;

	log = 1.0;
	sign = (n < 0);
	if (n < 0)
		n *= -1;
	while (n >= base_size)
	{
		log *= base_size;
		n /= base_size;
	}
	return (sign * log);
}
