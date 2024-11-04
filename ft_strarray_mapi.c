/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_mapi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:57 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/04 16:08:14 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strarray_mapi(char **strarray, char *(*f)(char *));
static void		*free_array(char **strarray, size_t size);

char	**ft_strarray_mapi(char **strarray, char *(*f)(char *))
{
	size_t	i;
	char	**newarray;

	i = 0;
	if (!strarray || !*strarray)
		return (NULL);
	newarray = ft_calloc(ft_arrlen(strarray), sizeof(char **));
	if (!newarray)
		return (NULL);
	while (*(strarray + i))
	{
		*(newarray + i) = f(*(strarray + i));
		if (!*(newarray + i))
			return(free_array(newarray, i));
		i++;
	}
	*(newarray + i) = 0;
	return (newarray);
}

static void	*free_array(char **strarray, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(*(strarray + i));
		i++;
	}
	free(strarray);
	return (NULL);
}
