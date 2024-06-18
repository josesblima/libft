# _*_ MakeFile _*_

SRCS = ft_printf.c ft_detohe.c ft_itoalong.c ft_itoa_unsigned.c ft_detohe_long.c ft_putstr_fd_count.c


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

re: fclean $(LIBFT) $(NAME)

.PHONY: all clean fclean re
