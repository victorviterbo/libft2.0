/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:34:08 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/05 21:29:39 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_atof(char *str);

float	ft_atof(char *str)
{
	float	integer;
	float	decimal;
	char	**splitted;
	int		decimal_len;
	float	ret;

	if (ft_strchr(str, '.') && !ft_strchr(str, ','))
		splitted = ft_split(str, '.');
	else if (ft_strchr(str, ',') && !ft_strchr(str, '.'))
		splitted = ft_split(str, ',');
	else
		return ((float)ft_atoi(str));
	integer = (float)ft_atoi(splitted[0]);
	decimal_len = ft_strlen(splitted[1]);
	decimal = (float)ft_atoi(splitted[1]);
	while (decimal_len)
	{
		decimal /= 10;
		decimal_len--;
	}
	ret = integer + decimal * (integer >= 0) - decimal * (integer < 0);
	return (ft_free_array((void **)splitted, 2), ret);
}
