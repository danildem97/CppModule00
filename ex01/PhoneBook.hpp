#ifndef PHONEBOOKHPP
# define PHONEBOOKHPP

#include <iostream>
#include <iomanip>
#include"Contact.hpp"

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void Menu();

	private:
		Contact book[8];
		Contact contact;
		int Add(int i);
		void Search(int i);
		void Exit();
		void DisplaySearch(int index);
		std::string TakeWord();
	
};

# endif