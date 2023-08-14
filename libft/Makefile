NAME= libft.a

SRCS= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  
OBJS = $(patsubst %.c,%.o,$(SRCS))
HEADER_FILE= /libft.h

CFLAGS= -Wall -Werror -Wextra -I $(HEADER_FILE)
CC= cc

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all