#include <iostream>
#include <iomanip>

static void prompt_title()
{
	std::cout << std::setw(10) << std::right << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::string isim;
    std::string soy_isim;
    std::getline(std::cin, isim);
    std::getline(std::cin, soy_isim);
    std::cout << isim << " " << soy_isim << std::endl;
    return 0;
}
