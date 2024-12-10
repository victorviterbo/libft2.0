/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initvec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:20:08 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/06 15:21:12 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_coor	ft_initvec(double x, double y, double z);

t_coor	ft_initvec(double x, double y, double z)
{
	t_coor	new_vector;

	new_vector.x = x;
	new_vector.y = y;
	new_vector.z = z;
	return (new_vector);
}