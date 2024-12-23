/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 22:22:49 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/10 10:19:29 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1);

char	*ft_strdup(const char *s1)
{
	char	*duplicate;

	duplicate = ft_calloc((ft_strlen((char *)s1) + 1), sizeof(char));
	if (!duplicate)
		return (NULL);
	ft_strlcpy(duplicate, s1, ft_strlen((char *)s1) + 1);
	return (duplicate);
}
