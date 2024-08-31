# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fagholam <fagholam@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 16:16:19 by fagholam          #+#    #+#              #
#    Updated: 2024/08/20 17:11:27 by fagholam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = srcs
INCLUDES_DIR = includes

SRCS = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_swap.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

LIB = libft.a

all: $(LIB)

$(LIB): $(OBJS)
	@echo "Creating $(LIB)..."
	ar rc $(LIB) $(OBJS)
	ranlib $(LIB)

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCLUDES_DIR)/ft.h
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	rm -f $(OBJS)

fclean: clean
	@echo "Cleaning $(LIB)..."
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
