NAME		= phonebook

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS_DIR	= ./
INC_DIR		= ./
OBJS_DIR		= OBJ

SRCS		= $(wildcard $(SRCS_DIR)/*.cpp)
OBJS		= $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
		@mkdir -p $(OBJS_DIR)
		$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
		@rm -rf $(OBJS_DIR)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
