NAME		= abstract

SRCS		= main.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++

RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror -I. -Wshadow -Wno-shadow -std=c++98 -g3

.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJS)
			@echo "\033[0;33m[ex03 compilation...]"
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