#include "phone_book.hpp"

int		search_in_book(string line){
	if (line.compare("0") == 0)
		return (0);
	if (line.compare("1") == 0)
		return (1);
	if (line.compare("2") == 0)
		return (2);
	if (line.compare("3") == 0)
		return (3);
	if (line.compare("4") == 0)
		return (4);
	if (line.compare("5") == 0)
		return (5);
	if (line.compare("6") == 0)
		return (6);
	if (line.compare("7") == 0)
		return (7);
	return (8);
}

int	main(void)
{
	Contact 	book[8];
	string		line;
	short int	counter;

	counter = 0;
	while (1)
	{
		cout << "Enter your command [ADD, SEARCH or EXIT]:" << endl;
		getline(cin, line);
		if (line.compare("ADD") == 0){
			if (counter >= 8)
				cout << "Phone book is full" << endl;
			else{
				book[counter].Set_contact();
				cout << "Done!" << endl;
			}
			counter++;
		}
		else if (line.compare("SEARCH") == 0){
			cout << "_____________________________________________" << endl;
			cout << "|     index|first name| last name|  nickname|" << endl;
			cout << "|__________|__________|__________|___________" << endl;
			for (int i = 0; book[i].available() == true; i++)
				book[i].print_book(i);
			cout << "Select the contact index:" << endl;
			getline(cin, line);
			book[search_in_book(line)].Print_contact(search_in_book(line));
		}
		else if (line.compare("EXIT") == 0)
			return (0);
		else
			cout << "Invalid command" << endl;
	}
	return (0);
}
