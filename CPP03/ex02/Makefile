NAME			= fragtrap

CXX				= c++
CXXFLAGS		= -Wall -Werror -Wextra -std=c++98

SRC_DIR		= ./
INC_DIR 		= ./
OBJ_DIR			= OBJ_DIR

SRCS			= $(wildcard $(SRC_DIR)/*.cpp)

OBJS			= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)


all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
