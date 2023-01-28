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

int	            ft_isalpha(int c);
int	            ft_isdigit(int c);
int	            ft_isalnum(int c);
int	            ft_isascii(int c);
int	            ft_isprint(int c);
int             ft_strlen(const char *s);
size_t          ft_strlcpy(char *dest, const char *src, size_t dstsize);
void            *ft_memset(void *dest, int c, size_t n);
void            ft_bzero(void *dst, size_t n);
void            *ft_memcpy(void *dst, const void *src, size_t n);
void            *ft_memmove(void *dst, const void *src, size_t len);
int             ft_toupper(int ch);
int             ft_tolower(int ch);
char            *ft_strchr(const char *s, int c);
char            *ft_strrchr(const char *s, int c);
size_t          ft_strlcat(char* dest, const char* src, size_t dstsize);


#endif
