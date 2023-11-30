/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:19:47 by ddemydov          #+#    #+#             */
/*   Updated: 2023/10/28 17:54:43 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

PhoneBook::PhoneBook(){

}
PhoneBook::~PhoneBook(){

}

void PhoneBook::Menu()
{
	int i = 0;
	while (1)
	{
		std::cout << "\nChoose option : \nADD, SEARCH, EXIT" << std::endl;
		std::string word = TakeWord();
		if(word == "ADD")
		{
			i = Add(i);
			continue;
		}
		else if (word == "SEARCH")
		{
			Search(i);
			continue;
		}
		else if (word == "EXIT")
			Exit();
		else
			std::cout << "\nWrong input!\n";
	}
}

void PhoneBook::DisplaySearch(int index)
{
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < index; ++i) {
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|";
		if(book[i].getFirstName().length() > 10)
			std::cout << std::setw(10) << (book[i].getFirstName().substr(0, 9) + ".");
		else if(book[i].getFirstName().length() < 10)
			std::cout << std::setw(10) << book[i].getFirstName().substr(0, 9);
		std::cout << "|";
		if(book[i].getLastName().length() > 10)
			std::cout << std::setw(10) << (book[i].getLastName().substr(0, 9) + ".");
		else if(book[i].getLastName().length() < 10)
			std::cout << std::setw(10) << book[i].getLastName().substr(0, 9);
		std::cout << "|";
		if(book[i].getNickName().length() > 10)
			std::cout << std::setw(10) << (book[i].getNickName().substr(0, 9) + ".") << "|" << std::endl;
		else if(book[i].getNickName().length() < 10)
			std::cout << std::setw(10) << book[i].getNickName().substr(0, 10) << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		}
	std::cout << "\n" << std::endl;
}

std::string PhoneBook::TakeWord()
{
	std::string word;
	std::cin >> word;
	return word; 
}

int PhoneBook::Add(int i)
{
	static int j = 0;
	std::cout << "First name : "; 
	contact.setFirstName(TakeWord());
	std::cout << "Last name : ";
	contact.setLastName(TakeWord());
	std::cout << "Nick name : ";
	contact.setNickName(TakeWord());
	std::cout << "Phone number : ";
	contact.setPhoneNumber(TakeWord());
	std::cout << "Darkest secret : ";
	contact.setDarkestSecret(TakeWord());
	book[j] = contact;
	if(i < 8)
		i++;
	j++;
	if(j == 8)
		j = 0;
	return i;
}
//  Please choose index from table.
void PhoneBook::Search(int index)
{	
	while(1)
	{
		int input = 0;
		DisplaySearch(index);
		std::cout << "Enter an index of a contact (only an integer)" << std::endl;
		std::cin >> input;
		if(input >= 0 && input < 7)
		{
		std::cout << std::endl;
		std::cout << book[input].getFirstName() << std::endl;
		std::cout << book[input].getLastName() << std::endl;
		std::cout << book[input].getNickName() << std::endl;
		std::cout << book[input].getPhoneNumber() << std::endl;
		std::cout << book[input].getDarkestSecret() << std::endl;
		return ;
		}
		else
		{
			std::cout << "Invalid input.\n" << std::endl;
			continue;
		}
	}
	

}

void PhoneBook::Exit()
{
	exit(0);
}