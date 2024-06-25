#include "main.hpp"

PhoneBook::PhoneBook() {
	this->num_contacts = 0;
	std::cout << "Welcome to the Phone Book app:" << std::endl;
	std::cout << "You can add a new contact with typing ADD command." << std::endl;
	std::cout << "You can search for a contact with typing SEARCH command." << std::endl;
	std::cout << "You can exit from Phone Book app with typing EXIT command." << std::endl;
}

void PhoneBook::add_to_arr(Contact contact)
{
	if (this->num_contacts == 8)
	{
		for (int i = 0; i < 7; i++)
		{
			this->contact_arr[i] = contact_arr[i + 1];
		}
		this->contact_arr[7] = contact;
	}
	else
	{
		this->contact_arr[this->num_contacts] = contact;
		this->num_contacts++;
	}
}

void PhoneBook::add()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string darkest_secret;

	std::cin.ignore();
	std::cout << "You enter the ADD command" << std::endl;
	std::cout << "For adding a new person to phone book, please enter the following informations" << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);

	Contact contact(first_name, last_name, nickname, number, darkest_secret);
	add_to_arr(contact);
	std::cout << '\n' << first_name << " " <<last_name << " is added to phone book" << std::endl;
}

static void prompt_title()
{
	std::cout << std::setw(10) << std::right << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Nickname";
	std::cout << std::endl;
}

void PhoneBook::search()
{
	int index;

	std::cout << "You enter the SEARCH command" << std::endl;
	if (this->num_contacts == 0)
	{
		std::cout << "There is no contact in the phone book" << std::endl;
		return ;
	}
	prompt_title();
	for (int i = 0; i < this->num_contacts; i++)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		this->contact_arr[i].prompt_line();
	}
	std::cout << "Enter the index for display" << std::endl;
	while (1)
	{
		std::cin >> index;
		if (-1 < index && index < this->num_contacts)
			break;
		std::cout << "Entered index şs oyr of range" << std::endl;
		std::cout << "Enter the index for display" << std::endl;
	}
	this->contact_arr[index].prompt_one();
}
