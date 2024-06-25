NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE = megaphone.cpp

all: ${NAME}

${NAME}: ${SOURCE}
	c++ ${SOURCE} ${FLAGS} -o ${NAME}

fclean:
	rm ${NAME}

re: fclean all

.PHONY: all fclean re