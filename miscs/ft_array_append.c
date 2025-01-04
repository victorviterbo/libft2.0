/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_append.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:35:52 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/04 12:36:23 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_array_append(char **array, char *str, bool first);

char	**ft_array_append(char **array, char *str, bool first)
{
	size_t	i;
	char	**concatenated;

	concatenated = ft_calloc(ft_arrlen(array) + 2, sizeof(char *));
	i = 0;
	if (first)
		concatenated[0] = str;
	while (array[i])
	{
		concatenated[i + first] = array[i];
		i++;
	}
	if (!first)
		concatenated[i] = str;
	concatenated[i + 1] = NULL;
	free(array);
	return (concatenated);
}
