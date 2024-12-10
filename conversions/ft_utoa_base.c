/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:00:36 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/10 10:57:03 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_utoa_base(unsigned long number, char *base);

char	*ft_utoa_base(unsigned long number, char *base)
{
	char	*number_str;
	size_t	magnitude;
	size_t	i;

	i = 0;
	number_str = ft_calloc((get_log_base(number, ft_strlen(base)) + 2),
			sizeof(char));
	if (!number_str)
		return (NULL);
	magnitude = ft_prev_power(number, ft_strlen(base));
	while (magnitude)
	{
		*(number_str + i) = *(base + number / magnitude);
		number %= magnitude;
		magnitude /= ft_strlen(base);
		i++;
	}
	*(number_str + i) = '\0';
	return (number_str);
}
