# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 14:46:57 by jschwabe          #+#    #+#              #
#    Updated: 2023/03/27 19:00:28 by jschwabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c ft_memmove.c \
		ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c

#flags for clang to use
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all: $(NAME)
#archive obj files into program
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#compile source files (.c) into OBJS
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

#clean up files after usage
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: clean