# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 17:38:26 by khbouych          #+#    #+#              #
#    Updated: 2022/10/23 19:45:21 by khbouych         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=CC
FLAGS= -Wall -Werror -Wextra -I libft.h
AR=ar cr
RM=rm -rf
FILES= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_strlen \
	   ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp \
	   ft_strnstr ft_strlcpy ft_strlcat ft_atoi ft_strdup \
	   ft_substr ft_strjoin ft_split ft_itoa ft_strmapi \
	   ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_isprint \
	   ft_striteri ft_putnbr_fd ft_strtrim ft_memcpy ft_memmove ft_memset \
	   ft_memcmp ft_memchr ft_bzero ft_calloc ft_striteri
BFILES  = ft_lstnew_bonus ft_lstadd_front_bonus \
		ft_lstsize_bonus ft_lstlast_bonus ft_lstadd_back_bonus ft_lstdelone_bonus \
	  	 ft_lstclear_bonus ft_lstiter_bonus ft_lstmap_bonus
OBJ=$(FILES:=.o)
BOBJ=$(BFILES:=.o)
NAME=libft.a

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

all: $(NAME)
	@echo "$(RED)------safi done------$(RESET)"


bonus: all $(BOBJ)
	@$(AR) $(NAME) $(BOBJ)


%.o: %.c libft.h
	@echo "hani kan commpili$(GREEN)" $< "$(RESET)akhay sat"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)Rah Temsa7 $(RESET)"
	@$(RM) $(OBJ) $(BOBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus