/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:35:23 by leilavaz          #+#    #+#             */
/*   Updated: 2023/01/11 16:03:49 by leilavaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(const char *s);
size_t			ft_strlcpy(char *dest, const char *src, size_t dstsize);
void			*ft_memset(void *dest, int c, size_t n);
void			ft_bzero(void *dst, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_toupper(int ch);
int				ft_tolower(int ch);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_strncmp(char *s1, char *s2, size_t n);
char			*ft_strnstr(const char *hays, const char *needle, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

/* PARTE 2ss
ft_putchar_fd - void ft_putchar_fd(char c, int fd);
ft_putstr_fd - void ft_putstr_fd(char *s, int fd);
ft_putendl_fd - void ft_putendl_fd(char *s, int fd);
ft_putnbr_fd - void ft_putnbr_fd(int n, int fd);

BONUS
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
ft_lstnew - t_list *ft_lstnew(void *content);
ft_lstadd_front - void ft_lstadd_front(t_list **lst, t_list *new);
ft_lstsize - int ft_lstsize(t_list *lst);
ft_lstlast - t_list *ft_lstlast(t_list *lst);
ft_lstadd_back - void ft_lstadd_back(t_list **lst, t_list *new);
ft_lstdelone - void ft_lstdelone(t_list *lst, void (*del)(void*));
ft_lstclear - void ft_lstclear(t_list **lst, void (*del)(void*));
ft_lstiter - void ft_lstiter(t_list *lst, void (*f)(void *));
ft_lstmap - t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

*/
#endif
