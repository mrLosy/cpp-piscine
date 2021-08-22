NAME		= megaphone

SRCS		= megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= clang++

RM			= rm -f

CXXFLAGS	= -Wall -Wextra -Werror

.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJS)
			@echo "\033[0;33m[ex00 compilation...]"
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
			@echo "\033[0;32m[Done!]"

clean:
		@echo "\033[0;31m[Deleting *.0 files...]"
		$(RM) $(OBJS)

fclean:	clean
		@echo "\033[0;31m[Deleting all files...]"
		$(RM) $(NAME)

re:		fclean $(NAME)

test:	$(NAME)
		./megaphone "shhhhh... I think the students are asleep..."
		./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
		./megaphone

.SILENT:
