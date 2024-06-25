NAME = phonebook
FLAGS = -std=c++98
SRC = Contact.cpp PhoneBook.cpp main.cpp
INC = Contact.hpp PhoneBook.hpp main.hpp

all: ${NAME}

${NAME}: ${SRC} ${INC}
	c++ ${SRC} ${FLAGS} -o ${NAME}

fclean:
	rm ${NAME}

re: fclean all

.PHONY: all fclean re