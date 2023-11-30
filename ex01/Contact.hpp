/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:00:13 by ddemydov          #+#    #+#             */
/*   Updated: 2023/10/27 13:40:34 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTHPP
# define CONTACTHPP

# include <iostream>

class Contact{
	public:
		Contact();
		~Contact();
		int CountLenght(std::string word);
		void setFirstName (std::string firstName);
		void setLastName (std::string lastName);
		void setNickName (std::string nickName);
		void setPhoneNumber (std::string phoneNumber);
		void setDarkestSecret (std::string darkestSecret);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
		std::string job;

};

# endif