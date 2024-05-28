# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josde-so <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 19:41:39 by josde-so          #+#    #+#              #
#    Updated: 2024/05/28 19:41:41 by josde-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# _*_ MakeFile _*_

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar -crs $(NAME) $(OBJS) $(BONUS_OBJS)


%.o: %.c
	cc -c -Wall -Wextra -Werror $<

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:
	rm -f $(OBJS) $(BONUS_OBJS) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
