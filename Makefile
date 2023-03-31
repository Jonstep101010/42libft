# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 14:46:57 by jschwabe          #+#    #+#              #
#    Updated: 2023/03/31 19:56:59 by jschwabe         ###   ########.fr        #
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
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		#ft_lstmap.c

#flags for clang to use
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)

all: $(NAME)
bonus: $(B_OBJS)
	ar rcs $(NAME) $(B_OBJS)

#archive obj files into program
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#compile source files (.c) into OBJS
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
#bonus
$(B_OBJS): $(B_SRCS)
	$(CC) $(CFLAGS) -c $(B_SRCS)
#clean up files after usage
clean:
	rm -f $(OBJS) $(B_OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: clean