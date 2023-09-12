NAME= libft.a

SRCS= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_putchar_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  
	  

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