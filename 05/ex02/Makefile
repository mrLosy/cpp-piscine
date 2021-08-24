NAME		= form

SRCS		= $(shell find ./srcs -name "*.cpp")

OBJS		= $(addprefix $(BIN_DIR), $(SRCS:.cpp=.o))

CXX			= clang++

RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -I. -Wshadow -Wno-shadow -std=c++98 -g3

INCLUDES	= $(shell find . -name "*.hpp")

.PHONY:		all clean fclean re test

all:		
		$(MAKE) $(NAME) $(BIN) -j 12

$(BIN_DIR)%.o: $(SRCS_DIR)%.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

-include $(OBJSRCS:.o=.d)

$(NAME):	$(OBJS)
			@echo "\033[0;33m[ex02 compilation...]"
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
			@echo "\033[0;32m[Done!]"

clean:
		@echo "\033[0;31m[Deleting *.0 files...]"
		$(RM) $(OBJS)

fclean:	clean
		@echo "\033[0;31m[Deleting all files...]"
		# rm *shrubbery
		$(RM) $(NAME)

re:		fclean all

.SILENT: