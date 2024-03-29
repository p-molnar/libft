/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pmolnar <pmolnar@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 19:05:41 by pmolnar       #+#    #+#                 */
/*   Updated: 2023/04/25 09:42:08 by pmolnar       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

# define CHAR_PLUS '+'
# define CHAR_MINUS '-'
# define CHAR_ZERO '0'
# define CHAR_DOT '.'

// struct prototype for linked list
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

// Additional functions
int				ft_isupper(int c);
int				ft_islower(int c);
int				ft_isspace(int c);
int				ft_isnegative(int n);
int				ft_abs(int i);
double			ft_fabs(double i);
char			ft_dtoa(int d);
int				ft_atod(char c);
double			ft_atof(const char *str);
size_t			ft_count(char *s, char c);
size_t			ft_get_num_len(long long n);
char			*ft_reverse_str(char *str);
int				ft_max(size_t arg_count, ...);
int				ft_min(size_t arg_count, ...);
double			ft_fmax(size_t arg_count, ...);
double			ft_fmin(size_t arg_count, ...);

// 	Part 1 - Libc functions
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *str);
char			*get_next_line(int fd);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle, \
							size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_char_realloc(char *ptr, size_t size);
void			*ft_realloc(void *obj, size_t obj_size, size_t new_size);
char			*ft_strdup(const char *s1);

//	Part 2 - Additional functions
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*strconcat(int n, ...);

//	Bonus part
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
							void (*del)(void *));
#endif
