# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 23:42:34 by nakebli           #+#    #+#              #
#    Updated: 2022/10/12 16:49:41 by nakebli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =    libft.a

SRCS =	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c 

OBJS = $(SRCS:.c=.o)


CFLAGS = -Wall -Werror -Wextra

RM = rm -f

AR = @ar -rcs

all: $(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all