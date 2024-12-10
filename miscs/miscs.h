/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miscs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:33:18 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/06 00:36:19 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISCS_H
# define MISCS_H

size_t	ft_arrlen(char **array);
void	ft_dummy(void *ptr);
void	ft_free_array(void **array, int size);
double	ft_parse_as(void *ptr, int dtype);
char	**ft_strarray_mapi(char **strarray, char *(*f)(const char *));
void	ft_swap_void(void **ptr1, void **ptr2);

#endif
