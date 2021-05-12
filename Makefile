##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile of project
##

RM = rm -f

CC = g++

NAME	=	ReadmeCreator

SRC	=	src/main.cpp	\
		src/Prompt.cpp	\
		src/ReadmeCreator.cpp	\

OBJ	= 	$(SRC:.cpp=.o)

CXXFLAGS	=	-I include			\
		-W -Wall -Wshadow -Wextra	\

all: $(NAME)

RED		=	\033[31;1m

PURPLE	=	\033[35;1m

END		=	\033[0m

$(NAME): $(OBJ)
	@echo "$(RED)Creating the $(PURPLE)binary $(RED)and compiling every cpp files.$(END)"
	$(CC) -o $(NAME) $(OBJ)

dbg: CXXFLAGS += -g
dbg: fclean
dbg: all

clean:
	@echo "$(RED)Cleaning the $(PURPLE)folder $(RED)!$(END)"
	$(RM) $(OBJ)

fclean: clean
	@echo "$(RED)Deleting the $(PURPLE)binary $(RED)!$(END)"
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all