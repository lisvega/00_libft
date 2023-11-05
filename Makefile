# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lisriver <lisriver@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:07:50 by lisriver          #+#    #+#              #
#    Updated: 2023/11/05 19:52:22 by lisriver         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a

SRCS		=	ft_atoi.c\
				ft_itoa.c \
				ft_isascii.c \
				ft_isalnum.c \
                ft_isalpha.c \
                ft_isdigit.c \
				ft_isprint.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_bzero.c \
				ft_memset.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memmove.c \
				ft_memcpy.c \
				ft_strdup.c \
				ft_strlen.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strnstr.c \
				ft_strncmp.c\
				ft_strtrim.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_itoa.c\
				ft_calloc.c\
				ft_split.c\
				ft_substr.c\
				ft_strmapi.c\
			

			
				
				
OBJS = ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all