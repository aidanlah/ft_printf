NAME = libftprintf.a

FILES = 

BONUS = 

OBJS = $(FILES:.c=.o)

OBJS_B = $(BONUS:.c=.o)

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

bonus:	$(NAME) $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)

clean:      
	$(RM) $(OBJS) $(OBJS_B)

fclean:     clean
	$(RM) $(NAME) $(bonus)

re:	fclean all

.PHONY:	all bonus clean fclean re