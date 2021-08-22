#include "phone_book.hpp"

Contact::Contact(void){
	be = false;
	return ;
}

Contact::~Contact(void){
	return ;
}
void	Contact::Set_contact(void){
	cout << "Enter your first name      :" << endl;
	getline(cin, first_name);	
	cout << "Enter your last name       :" << endl;
	getline(cin, last_name);	
	cout << "Enter your nickname        :" << endl;
	getline(cin, nickname);	
	cout << "Enter your login           :" << endl;
	getline(cin, login);
	cout << "Enter your postal address  :" << endl;
	getline(cin, postal_address);
	cout << "Enter your email address   :" << endl;
	getline(cin, email_address);
	cout << "Enter your phone number    :" << endl;
	getline(cin, phone_number);
	cout << "Enter your birthday_date   :" << endl;
	getline(cin, birthday_date);
	cout << "Enter your favorite meal   :" << endl;
	getline(cin, favorite_meal);
	cout << "Enter your underwear color :" << endl;
	getline(cin, underwear_color);
	cout << "Enter your darkest_secret  :" << endl;
	getline(cin, darkest_secret);
	be = true;
}

void	Contact::Print_contact(int i){
	if (i < 8 && available()){
	cout << "First name      :" << first_name << endl;	
	cout << "Last name       :" << last_name << endl;	
	cout << "Nickname        :" <<  nickname << endl;	
	cout << "Login           :" << login << endl;
	cout << "Postal address  :" << postal_address << endl;
	cout << "Email address   :" << email_address << endl;
	cout << "Phone number    :" << phone_number << endl;
	cout << "Birthday_date   :" << birthday_date << endl;
	cout << "Favorite meal   :" << favorite_meal << endl;
	cout << "Underwear color :" << underwear_color << endl;
	cout << "Darkest_secret  :" << darkest_secret << endl;
	cout << "\n";
	}
	else
		cout << "Invalid index. Return to main menu" << endl;
}


int		Contact::available(void){
	return (be);
}

string	Contact::Return_str(string c){
	return c;
}

void	Contact::print_book(int i){
	cout << setw(10) << i << "|" \
	<< setw(10) << first_name << "|" \
	<< setw(10) << last_name << "|" \
	<< setw(10) << nickname << "|" << endl;
}