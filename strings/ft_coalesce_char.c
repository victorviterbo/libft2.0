/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coalesce_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:34:10 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/07 23:31:38 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_coalesce_char(char *str, char c, bool inplace);

char	*ft_coalesce_char(char *str, char c, bool inplace)
{
	char	*coalesc;
	char	*trimm;
	size_t	i;
	size_t	j;

	trimm = ft_strtrim_char(str, c, false);
	coalesc = ft_calloc(1, 1);
	i = 0;
	j = 0;
	while (trimm[i])
	{
		if (trimm[i] == c && trimm[i - 1] != c)
		{
			coalesc = ft_strjoin_ip(coalesc, ft_substr(trimm, j, i - j), 3);
			j = i;
		}
		else if (trimm[i] == c)
			j = i;
		i++;
	}
	if (i && i != j)
		coalesc = ft_strjoin_ip(coalesc, ft_substr(trimm, j, i - j), 3);
	if (inplace)
		free(str);
	return (free(trimm), coalesc);
}
