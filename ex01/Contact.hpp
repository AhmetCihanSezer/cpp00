#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        std::string darkest_secret;
    public:
        Contact();
        Contact(std::string first_name,
                std::string last_name,
                std::string nickname,
                std::string number,
                std::string darkest_secret);
        void prompt_one();
        void prompt_line();
};

#endif