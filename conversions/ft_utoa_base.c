/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:00:36 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/06 16:02:50 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_utoa_base(unsigned long number, char *base);
static size_t	get_usize(unsigned long n, int base_size);

char	*ft_utoa_base(unsigned long number, char *base)
{
	char	*number_str;
	size_t	magnitude;
	size_t	i;

	i = 0;
	number_str = ft_calloc((get_usize(number, ft_strlen(base)) + 2),
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

static size_t	get_usize(unsigned long n, int base_size)
{
	size_t	size;

	size = (n < 0);
	if (n < 0)
		n *= -1;
	if (base_size <= 0)
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