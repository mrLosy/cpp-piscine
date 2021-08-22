#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

using std::string;
using std::endl;
using std::cout;
using std::getline;
using std::cin;
using std::setw;

class Contact {

public:
		Contact(void);
		~Contact(void);

		void	Set_contact(void);
		void	Print_contact(int i);
		int		available(void);
		string	Return_str(string c);
		void	print_book(int i);
private:

		string first_name;
		string last_name;
		string nickname;
		string login;
		string postal_address;
		string email_address;
		string phone_number;
		string birthday_date;
		string favorite_meal;
		string underwear_color;
		string darkest_secret;
		bool	be;
};

#endif