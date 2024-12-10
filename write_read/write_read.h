/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:33:18 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/06 16:07:22 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_READ_H
# define WRITE_READ_H

char			*ft_get_next_line(int fd);
static char		*agglutinate(int fd, char *g_lst_files, char *line);
int				ft_printf(const char *str, ...);
static size_t	print_format(char *str, va_list argl);
static char		*get_radix(char type, va_list argl);
static char		*set_width(char *formated, char *str, int *width);
static char		*set_precision(char *formated, char *str, int *precision);
char			*ft_strjoin_gnl(char const *s1, char const *s2, int in_place);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);

#endif
