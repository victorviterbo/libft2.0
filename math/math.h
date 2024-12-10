/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:33:18 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/06 15:56:10 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

double	ft_abs(double n);
double	ft_dotprod(t_coor v1, t_coor v2);
t_coor	ft_initvec(double x, double y, double z);
int		get_log_base(double n, int base_size);
double	ft_max(double a, double b);
double	ft_min(double a, double b);
double	ft_norm(t_coor vector);
double	ft_prev_power(double n, int base_size);
t_coor	ft_vecadd(t_coor v1, t_coor v2);
t_coor	ft_vecscale(t_coor base, t_coor tip, float scale);
t_coor	vec_substr(t_coor v1, t_coor v2);
t_coor	ft_vecsubstr(t_coor v1, t_coor v2);

#endif
