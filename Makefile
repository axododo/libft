CC = cc
CFLAG = -Wall -Wextra -Werror -g
NAME = libft.a
HEADER = libft.h
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c  ft_memcpy.c ft_memmove.c 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
    ar -crs $(NAME) $(OBJS) $(HEADER)

%.o : %.c $(HEADER)
    $(CC) $(CFLAGS) $< -c -o $@

fclean: clean
    rm -f $(NAME)

clean:
    rm -f $(OBJS)

re: fclean all

.PHONY: all fclean clean re
