#include "main.hpp"

int main(void)
{
	PhoneBook	book;
	std::string	command;
	
	while (1)
	{
		std::cout << "-------------------------" << std::endl;
		std::cout << "Enter the command: ";
		std::cin >> command;
		if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Entered a wrong command (ADD, SEARCH, EXIT)" << std::endl;
	}
	std::cout << "You enter the EXIT command" << std::endl;
	std::cout << "Exited from phone book" << std::endl;
	return 0;
}
