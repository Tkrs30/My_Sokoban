##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## my make file
##

NAME	=	my_sokoban

SRCS	= 	$(wildcard src/*.c)

OBJS	=	$(SRCS:.c=.o)

CC = gcc

RM	=	rm -f

CFLAGS += -I ./include/

CFLAGS += -g3 -W -Wall -Wextra -lncurses

all: $(NAME)

$(NAME): $(OBJS)
		@ echo "\033[1;36m[ FILES COMPILED ] \033[0m \033[1;34m$(NBR_OF_FILES)\033[0m"
		@ $(CC) -o $(NAME) $(OBJS) $(CFLAGS)
		@ echo "\033[1;34mBinary : \033[1;32m$(NAME)\033[1;34m created sucesfully.\033[0m"

clean:
		@ echo "\033[3;31mRemoving: \033[0m"
		@ echo "\033[3;31m$(OBJS)\033[0m" | tr ' ' '\n'
		@ $(RM) $(OBJS)

fclean:	clean
		@ echo "\033[3;31m./$(NAME)\033[0m"
		@ $(RM) $(NAME)

re: 	fclean all