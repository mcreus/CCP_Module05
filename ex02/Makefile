NAME	=	Bureaucrat

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

SRCS	=	Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp
OBJS	=	$(SRCS:.cpp=.o)

%.o:%.cpp
		c++ -Wall -Wextra -Werror -std=c++98 -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		@echo "\033[0;33m\nCOMPILATION Bureaucrat\n"
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "\033[1;32m\nCOMPILATION REUSSIE\n"


clean:
		@echo "\033[0;31m\nDELETING OBJS\n"
		rm -rf $(OBJS)
		@echo "\033[1;32m\nDONE\n"

fclean: clean
		@echo "\033[0;31m\nDELETING Bureaucrat\n"
		rm -rf $(NAME)
		rm -rf *_shrubbery
		@echo "\033[1;32m\nDONE\n"

re: fclean all