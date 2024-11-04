/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarray_mapi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:57 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/04 16:02:27 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strarray_mapi(char **strarray, char *(*f)(char *));

char	**ft_strarray_mapi(char **strarray, char *(*f)(char *))
{
	size_t	i;
	char	**newarray;

	i = 0;
	if (!strarray || !*strarray)
		return (NULL);
	newarray = ft_calloc(1, sizeof(char **));
	if (!newarray)
		return (NULL);
	while (*(strarray + i))
	{
		*(newarray + i) = f(*(strarray + i));
		i++;
	}
	*(newarray + i) = 0;
	return (newarray);
}
