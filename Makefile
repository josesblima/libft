# _*_ MakeFile _*_

SRCS = ft_printf.c ft_detohe.c ft_itoalong.c ft_itoa_unsigned.c ft_detohe_long.c


OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

LIBFT = libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS)
	mv $(LIBFT) $(NAME)
	ar -crs $(NAME) $(OBJS)

%.o:%.c
	cc -c -Wall -Wextra -Werror $<

clean:
	rm -f $(OBJS) 
	make clean -C libft

fclean:
	rm -f $(OBJS) $(NAME)
	make fclean -C libft

re: fclean $(NAME)

.PHONY: all clean fclean re
