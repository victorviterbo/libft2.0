/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:33:18 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/06 16:03:35 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

int				ft_atoi(const char *str);
float			ft_atof(char *str);
char			*ft_ctoa(char c);
char			*ft_itoa_base(long long n, char *base);
static size_t	handle_neg(long long *number, char *number_str);
char			*ft_itoa(int n);
char			*ft_utoa_base(unsigned long number, char *base);
static size_t	get_usize(unsigned long n, int base_size);

#endif
