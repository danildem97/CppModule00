/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:19:45 by ddemydov          #+#    #+#             */
/*   Updated: 2023/10/27 13:41:31 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include"Contact.hpp"

	// Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) 
	// {
	// 	this->firstName = firstName;
	// 	this->lastName = lastName;
	// 	this->nickName = nickName;
	// 	this->phoneNumber = phoneNumber;
	// 	this->darkestSecret = darkestSecret;
	// }
	Contact::Contact() {
		
	}
	Contact::~Contact() {
    
	}
	 int Contact::CountLenght(std::string word)
	 {
		int i = 0;
		while(word[i])
			i++;
		return i;
	 }
	std::string Contact::getFirstName() {
		return firstName;
		}
	std::string Contact::getLastName() {
		return lastName;
	}
	std::string Contact::getNickName() {
		return nickName;
	}
	std::string Contact::getPhoneNumber() {
		return phoneNumber;
	}
	std::string Contact::getDarkestSecret() {
		return darkestSecret;
	}

	void Contact::setFirstName(std::string firstName) {
		this->firstName = firstName;
	}
	void Contact::setLastName(std::string lastName) {
		this->lastName = lastName;
	}
	void Contact::setNickName(std::string nickName) {
		this->nickName = nickName;
	}
	void Contact::setPhoneNumber(std::string phoneNumber) {
		this->phoneNumber = phoneNumber;
	}
	void Contact::setDarkestSecret(std::string darkestSecret) {
		this->darkestSecret = darkestSecret;
	}
