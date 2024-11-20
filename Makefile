CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = push_swap.a
EXEC = push_swap

LIBFT = libft/
UTILS = utils/
SRCS = $(addprefix $(LIBFT), ft_isalnum.c ft_isalpha.c ft_isascii.c\
	ft_isdigit.c ft_isprint.c ft_strchr.c ft_putchar_fd.c\
	ft_strlen.c ft_strrchr.c ft_atoi.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c\
	ft_strnstr.c ft_memchr.c ft_memset.c ft_memcmp.c ft_memmove.c ft_memcpy.c\
	ft_bzero.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	ft_split.c ft_itoa.c ft_lstadd_back_bonus.c ft_putstr_fd.c\
	ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
	ft_lstlast_bonus.c ft_lstnew_bonus.c ft_putnbr_fd.c\
	ft_lstsize_bonus.c ft_printf.c ft_print_hex.c ft_print_numbers.c ft_print_pointers.c ft_print_unsigned.c)


SRCS_UTILS = $(addprefix $(UTILS), swapFunctions.c rotateFunctions.c revRotateFunctions.c pushFunctions.c cmpFunctions.c checkers.c)

SRCS_PSWAP = main.c algo.c

OBJS = $(SRCS:.c=.o) $(SRCS_PSWAP:.c=.o) $(SRCS_UTILS:.c=.o)

all: $(NAME) #$(EXEC)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(EXEC): $(NAME)
	$(CC) $(CFLAGS) push_swap.a main.c -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
