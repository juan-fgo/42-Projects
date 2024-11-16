SRCS=		ft_print_char.c \
			ft_print_hex.c \
			ft_print_nbr.c \
			ft_print_string.c \
			ft_print_strlen.c \
			ft_print_unint.c \
			ft_print_ptr.c\
			ft_printf.c

OBJS		= $(SRCS:%.c=%.o)

CC			= gcc
RM			= rm -f
CCFLAGS		= -Wall -Wextra -Werror -I.

NAME		= libftprintf.a
INCLUDE		= printf.h

%.o: %.c
	$(CC) -I$(INC_DIR) $(CCFLAGS) -o $@ -c $<

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(NAME) $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

clear:		fclean
			clear

.PHONY:		all clean fclean re