.PHONY: all clean fclean re

#####################################################
#					PROGRAM							#
#####################################################
NAME = sed

#####################################################
#					COMPILING						#
#####################################################
CC		=	c++
W_FLAGS	=	-Wall -Wextra -Werror 
CPP_FLAGS =	-std=c++98
DEP_FLAGS = -MMD -MP


#####################################################
#					DIRECTORIES						#
#####################################################
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

#####################################################
#					FILES							#
#####################################################
SRC =	$(SRC_DIR)/main.cpp

HEADER = $(INC_DIR)/

OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))
DEP := $(OBJ:%.o=%.d)

#####################################################
#					TARGETS							#
#####################################################
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(W_FLAGS) $(CPP_FLAGS) $(DEP_FLAGS)  $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp| $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(W_FLAGS) $(CPP_FLAGS) $(DEP_FLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

-include $(DEP)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
