NAME		= ClapTrap

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++

RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -I. -Wshadow  -Wno-shadow

.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJS)
			@echo "\033[0;33m[ex02 compilation...]"
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
			@echo "\033[0;32m[Done!]"

clean:
		@echo "\033[0;31m[Deleting *.0 files...]"
		$(RM) $(OBJS)

fclean:	clean
		@echo "\033[0;31m[Deleting all files...]"
		$(RM) $(NAME)

re:		fclean all

.SILENT:
