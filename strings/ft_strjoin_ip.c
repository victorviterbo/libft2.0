/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_ip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:14:52 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/10 10:19:29 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin_ip(char const *s1, char const *s2, int in_place);

char	*ft_strjoin_ip(char const *s1, char const *s2, int in_place)
{
	char	*joined;

	joined = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!joined || !s1 || !s2)
	{
		if (s1 && (in_place == 1 || in_place == 3))
			free((void *)s1);
		if (s2 && (in_place == 2 || in_place == 3))
			free((void *)s2);
		if (joined)
			free(joined);
		return (NULL);
	}
	ft_memmove(joined, s1, ft_strlen(s1));
	ft_memmove(joined + ft_strlen(s1), s2, ft_strlen(s2));
	*(joined + ft_strlen(s1) + ft_strlen(s2)) = '\0';
	if (in_place == 1 || in_place == 3)
		free((void *)s1);
	if (in_place == 2 || in_place == 3)
		free((void *)s2);
	return (joined);
}
