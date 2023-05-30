# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 14:46:57 by jschwabe          #+#    #+#              #
#    Updated: 2023/05/30 19:55:48 by jschwabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

AR = ar rcs

RM = rm
RMFLAGS = -f

DEPS = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c
TESTFILE = main.c
OBJS = $(SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)

all: $(NAME)

#archive obj files into program
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(B_OBJS) $(OBJS)
	$(AR) $(NAME) $(B_OBJS) $(OBJS)

#compile source files (.c) into OBJS
.c.o: $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

#clean up files after usage
clean:
	$(RM) $(RMFLAGS) $(OBJS) $(B_OBJS)
fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

tclean: clean
	$(RM) $(RMFLAGS) a.out
	$(RM) $(RMFLAGS) $(TESTFILE:.c=.o)
test: $(NAME) $(TESTFILE:.c=.o)
	$(CC) $(CFLAGS) -o ./a.out $(TESTFILE:.c=.o) $(NAME)
	./a.out
re: fclean all

.PHONY: all bonus clean fclean re