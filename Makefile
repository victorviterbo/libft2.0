# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 12:45:22 by vviterbo          #+#    #+#              #
#    Updated: 2025/01/04 15:47:33 by vviterbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CHARACTERS			= 	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
						ft_isprint.c ft_tolower.c ft_toupper.c
SRCS_CHARACTERS		=	$(addprefix characters/, $(CHARACTERS))
OBJS_CHARACTERS 	=	$(patsubst characters%.c, objs%.o, $(SRCS_CHARACTERS))


CONVERSIONS			=	ft_atof.c ft_atoi.c ft_ctoa.c ft_itoa.c ft_itoa_base.c \
						ft_utoa_base.c
SRCS_CONVERSIONS	=	$(addprefix conversions/, $(CONVERSIONS))
OBJS_CONVERSIONS 	=	$(patsubst conversions%.c, objs%.o, $(SRCS_CONVERSIONS))


LISTS				=	ft_lst_getn.c ft_lst_isin_int.c ft_lst_isin_void.c \
						ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
						ft_lstcut.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
						ft_lstmap_void.c ft_lstmax.c ft_lstmaxi.c ft_lstmin.c \
						ft_lstmini.c ft_lstnew_int.c ft_lstnew_void.c \
						ft_lstsize.c
SRCS_LISTS			=	$(addprefix lists/, $(LISTS))
OBJS_LISTS		 	=	$(patsubst lists%.c, objs%.o, $(SRCS_LISTS))


MATH				=	ft_abs.c ft_dotprod.c ft_initvec.c ft_log_base.c \
						ft_max.c ft_min.c ft_norm.c ft_prev_power.c \
						ft_vecadd.c ft_vecscale.c ft_vecsubstr.c
SRCS_MATH			=	$(MATH:%=math/%)
OBJS_MATH		 	=	$(SRCS_MATH:math/%.c=objs/%.o)


MEMORY				=	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c \
						ft_memcpy.c ft_memmove.c ft_memset.c
SRCS_MEMORY			=	$(addprefix memory/, $(MEMORY))
OBJS_MEMORY		 	=	$(patsubst memory%.c, objs%.o, $(SRCS_MEMORY))


MISCS				=	ft_arrlen.c ft_dummy.c ft_free_array.c ft_parse_as.c \
						ft_strarray_mapi.c ft_swap_void.c ft_array_append.c
SRCS_MISCS			=	$(addprefix miscs/, $(MISCS))
OBJS_MISCS		 	=	$(patsubst miscs%.c, objs%.o, $(SRCS_MISCS))


STRINGS				=	ft_isfloat.c ft_isint.c ft_split.c ft_strchr.c ft_strdup.c \
						ft_striteri.c ft_strjoin.c ft_strjoin_ip.c \
						ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
						ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
						ft_substr.c
SRCS_STRINGS		=	$(addprefix strings/, $(STRINGS))
OBJS_STRINGS	 	=	$(patsubst strings%.c, objs%.o, $(SRCS_STRINGS))


WRITE_READ			=	ft_get_next_line.c ft_putchar_fd.c \
						ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
						ft_readfile.c
SRCS_WRITE_READ		=	$(addprefix write_read/, $(WRITE_READ))
OBJS_WRITE_READ 	=	$(patsubst write_read%.c, objs%.o, $(SRCS_WRITE_READ))

PRINTF				=	ft_conv_utils.c ft_itoa_base.c ft_memutils.c \
						ft_printf.c ft_strutils.c
SRCS_PRINTF			=	$(addprefix printf/, $(PRINTF))
OBJS_PRINTF		 	=	$(patsubst printf%.c, objs%.o, $(SRCS_PRINTF))

OBJS =	$(OBJS_CHARACTERS) $(OBJS_CONVERSIONS) $(OBJS_LISTS) $(OBJS_MATH) \
        $(OBJS_MEMORY) $(OBJS_MISCS) $(OBJS_STRINGS) $(OBJS_WRITE_READ) \
		$(OBJS_PRINTF)
		
HEADER = libft.h

CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

clean :
	rm -f objs/*.o

fclean : clean
	rm -f $(NAME)

re : fclean all

objs_folder :
	@mkdir -p objs/

$(NAME): objs_folder $(OBJS)
	ar rcs $(NAME) $(OBJS)

objs/%.o: characters/%.c
	$(CC) $(CFLAGS) -c $< -o $@

objs/%.o: conversions/%.c
	$(CC) $(CFLAGS) -c $< -o $@

objs/%.o: math/%.c
	$(CC) $(CFLAGS) -c $< -o $@

objs/%.o: miscs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

objs/%.o: strings/%.c
	$(CC) $(CFLAGS) -c $< -o $@

objs/%.o: write_read/%.c
	$(CC) $(CFLAGS) -c $< -o $@

objs/%.o: lists/%.c
	$(CC) $(CFLAGS) -c $< -o $@

objs/%.o: memory/%.c
	$(CC) $(CFLAGS) -c $< -o $@

objs/%.o: printf/%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
