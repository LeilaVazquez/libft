# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leilavaz <leilavaz@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 16:05:43 by leilavaz          #+#    #+#              #
#    Updated: 2023/01/11 16:05:48 by leilavaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =	ft_isalpha\
		ft_isdigit\
		ft_isalnum\
		ft_isascii\
		ft_isprint\
		ft_strlen\
		ft_memset\
		ft_bzero\
		ft_memcpy\
		ft_toupper\
		ft_tolower\
		ft_strlcpy\
		ft_strchr\
		ft_strrchr\
		ft_strlcat\
		ft_strncmp\
		ft_strnstr\
		ft_memchr\
		ft_memcmp\
		ft_atoi\
		ft_memmove\
		ft_calloc\
		ft_strdup
		
FILES_B =	ft_substr\
			ft_strjoin\
			ft_strtrim\
			ft_split\
			ft_itoa\
			ft_strmapi\
			ft_striteri

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

.c .o: $(SRCS)
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
		$(AR) $(NAME) $^

all: $(NAME)

clean:
		$(RM) $(OBJS) $(OBJS_B)

fclean: clean
			$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
