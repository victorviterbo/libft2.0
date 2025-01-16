/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:28:17 by vviterbo          #+#    #+#             */
/*   Updated: 2025/01/16 20:05:11 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_str_replace(char *str, char *to_repl, char *repl_w);

char	*ft_str_replace(char *str, char *to_repl, char *repl_w)
{
	char	*replaced;
	size_t	i;
	size_t	j;
	size_t	newsize;


	i = -1;
	j = 0;
	if (!str || !to_repl || !repl_w)
		return (NULL);
	newsize = (ft_strlen(repl_w) - ft_strlen(to_repl))
		* ft_count_strocc(str, repl_w, true) + ft_strlen(str);
	replaced = ft_calloc(newsize, sizeof(char));
	if (!replaced)
		return (NULL);
	while (str[i])
	{
		if (ft_strncmp(str + i, to_repl, ft_strlen(to_repl)) == 0)
		{
			ft_strlcpy(replaced + j, repl_w, newsize - j);
			j += ft_strlen(repl_w);
			i += ft_strlen(to_repl);
			continue ;
		}
		replaced[j] = str[i];
		i++;
		j++;
	}
}

if (!str || !to_repl || !repl_w)
		return (NULL);
	if (ft_strlen(str) < ft_strlen(to_repl))
		return (str);
	newsize = (ft_strlen(repl_w) - ft_strlen(to_repl))
		* ft_count_strocc(str, repl_w, true) + ft_strlen(str);