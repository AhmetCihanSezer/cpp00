#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contact_arr[8];
		int		num_contacts;
		void	add_to_arr(Contact contact);
	public:
		PhoneBook();
		void add();
		void search();
};


#endif