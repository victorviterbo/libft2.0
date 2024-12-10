/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:33:18 by vviterbo          #+#    #+#             */
/*   Updated: 2024/12/06 16:08:50 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

# include <stddef.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <float.h>
# include <stdbool.h>

# include "characters/characters.h"
# include "conversions/conversions.h"
# include "lists/lists.h"
# include "math/math.h"
# include "memory/memory.h"
# include "miscs/miscs.h"
# include "write_read/write_read.h"

enum e_Datatype {
	SHORT,
	INT,
	FLOAT,
	DOUBLE,
	BOOL,
	CHAR
};

typedef struct s_coor {
	double	x;
	double	y;
	double	z;
}	t_coor;

typedef struct s_list
{
	union
	{
		void	*content;
		int		i;
	};
	struct s_list	*next;
}	t_list;

#endif
