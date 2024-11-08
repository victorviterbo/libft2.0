/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:33:18 by vviterbo          #+#    #+#             */
/*   Updated: 2024/11/07 15:32:38 by vviterbo         ###   ########.fr       */
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

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <float.h>
# include <stdbool.h>

enum e_Datatype {
	SHORT,
	INT,
	FLOAT,
	DOUBLE,
	BOOL,
	CHAR
};

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list	*lst, void (*f)(void	*));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	**ft_lstget_nth(t_list **lst, unsigned int n);
t_list	*ft_lstsearch(t_list **lst, void	*needle, size_t needle_size);

int		ft_atoi(const char *str);
void	ft_bzero(void *s, unsigned int n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char *s));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

char	*ft_strjoin_ip(char const *s1, char const *s2, int in_place);
int		ft_isnumber(char *str);
double	ft_min(double a, double b);
double	ft_max(double a, double b);
int		ft_lst_isin(t_list **lst, void *elem, int size);
double	ft_lstmin(t_list **lst, int dtype);
double	ft_lstmax(t_list **lst, int dtype);
char	**ft_strarray_mapi(char **strarray, char *(*f)(const char *));
size_t	ft_arrlen(char **array);
void	ft_free_array(void **array, int size);
double	ft_parse_as(void *ptr, int dtype);

char	*ft_get_next_line(int fd);
char	*ft_strjoin_gnl(char const *s1, char const *s2, int in_place);

#endif
