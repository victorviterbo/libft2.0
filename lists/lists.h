/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:33:18 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/06 00:27:16 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H

t_list	*ft_lst_getn(t_list **lst, int n);
t_list	*ft_lst_isin_int(t_list **lst, int elem);
t_list	*ft_lst_isin_void(t_list **lst, void *elem, int size);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstcut(t_list **lst, void (*del)(void *), int start, int end);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap_void(t_list *lst, void *(*f)(void *), void (*del)(void *));
double	ft_lstmax(t_list **lst, int dtype);
int		ft_lstmaxi(t_list **lst);
double	ft_lstmin(t_list **lst, int dtype);
int		ft_lstmini(t_list **lst);
t_list	*ft_lstnew_int(int i);
t_list	*ft_lstnew_void(void *content);
int		ft_lstsize(t_list *lst);

#endif
