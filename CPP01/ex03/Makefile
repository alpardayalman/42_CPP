NAME = Unnecessary_violence
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@make clean
		@echo "\033[92mProgram finished.\033[0m"

$(OBJ) : 
		@$(CC) $(CFLAGS) $(SRC) -c

clean :
		@rm -rf $(OBJ)

fclean : clean
		@rm -rf $(NAME)

re : fclean all%

