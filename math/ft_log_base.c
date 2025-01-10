/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:42:04 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/09 18:11:34 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_log_base(double n, int base_size);

int	ft_log_base(double n, int base_size)
{
	int	size;

	size = (n < 0);
	if (n < 0)
		n *= -1;
	if (base_size < 2)
		return (0);
	if (!n)
		return (1);
	while (n > 0)
	{
		size++;
		n /= base_size;
	}
	return (size);
}
