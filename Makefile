NAME = libftprintf.a

FILES = ft_itoa_testing.c \
		ft_print_char.c \
		ft_print_hex.c \
		ft_print_nbr.c \
		ft_print_ptr.c \
		ft_print_str.c \
		ft_print_unsigned.c \
		ft_printf.c

OBJS = $(FILES:.c=.o)

HEAD = ft_printf.h

AR = ar rcs

RM = rm -f

GCC = gcc

CFLAGS = -Wall -Werror -Wextra

all:	$(NAME)

.c.o:
	$(GCC) $(CFLAGS) -I $(HEAD) -c $< -o $(<:.c=.o)

$(NAME):    $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:      
	$(RM) $(OBJS)

fclean:     clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re