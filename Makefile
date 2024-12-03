NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = ft_printf.c ft_prn_char.c ft_prn_nbr.c ft_prn_str.c ft_prn_u_hex.c
OBJS = $(SRCS:.c=.o)

MAIN = main
MAIN_OBJS = $(MAIN).o

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

main: $(NAME) $(MAIN_OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(MAIN_OBJS) -L. -lftprintf

clean:
	$(RM) $(OBJS) $(MAIN_OBJS)

fclean: clean
	$(RM) $(NAME) $(MAIN)

re: fclean all

.PHONY: all clean fclean re

