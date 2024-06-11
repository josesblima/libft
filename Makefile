# _*_ MakeFile _*_

SRCS = ft_printf.c ft_detohe.c ft_itoalong.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

LIBFT = libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	cd libft && make

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

%.o:%.c
	cc -c -Wall -Wextra -Werror $<

clean:
	rem -f $(OBJS) 

fclean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
