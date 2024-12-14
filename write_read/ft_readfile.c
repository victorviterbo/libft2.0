/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:07:17 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/14 18:10:11 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_readfile(int fd);

char	*ft_readfile(int fd)
{
	int		byte_read;
	char	*buffer;
	char	*fcontent;

	if (fd <= 0)
		return (NULL);
	byte_read = 1;
	buffer = ft_calloc(1, sizeof(char));
	fcontent = ft_calloc(1, sizeof(char));
	while (byte_read)
	{
		byte_read = read(fd, buffer, 1);
		fcontent = ft_strjoin_ip(fcontent, buffer, 1);
	}
	return (fcontent);
}
