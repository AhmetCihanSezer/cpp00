#include "main.hpp"

Contact::Contact()
{}

Contact::Contact(std::string first_name, std::string last_name,
	std::string nickname, std::string number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->number = number;
	this->darkest_secret = darkest_secret;
}

void	Contact::prompt_one()
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Number: " << this->number << std::endl;
	std::cout << "The darkest secret: " << this->darkest_secret << std::endl;
}

void	Contact::prompt_line()
{
	std::cout << std::setw(10) << std::right << (this->first_name.length() > 10 ? this->first_name.substr(0, 9) + "." : this->first_name);
	std::cout << "|";
	std::cout << std::setw(10) << std::right << (this->last_name.length() > 10 ? this->last_name.substr(0, 9) + "." : this->last_name);
	std::cout << "|";
	std::cout << std::setw(10) << std::right << (this->nickname.length() > 10 ? this->nickname.substr(0, 9) + "." : this->nickname);
	std::cout << std::endl;
}
