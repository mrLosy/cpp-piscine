#include "Karen.hpp"

void Karen::complain(string level){
	typedef void (Karen::*methods)(void);
	methods Functions[4] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int i = 0;
	for (; i < 4; i++){
		if (!levels[i].compare(level))
			break ;
	}
	switch (i)
	{
	case 0: {
		(this->*(Functions[0]))();
		cout << endl;
	}
	case 1: {
		(this->*(Functions[1]))();
		cout << endl;
	}
	case 2: {
		(this->*(Functions[2]))();
		cout << endl;
	}
	case 3: {
		(this->*(Functions[3]))();
		cout << endl;
		break ;
	}	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Karen::debug(void){
	cout << "DEBUG" << endl;
	cout << "I love to get extra bacon \
for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << endl;
}

void	Karen::info(void){
	cout << "INFO" << endl;
	cout << "I cannot believe adding extra \
bacon cost more money. You don’t put enough! If you did I would not have to ask \
for it!" << endl;
}

void	Karen::warning(void){
	cout << "WARNING" << endl;
	cout << "I think I deserve to have some extra bacon for free. I’ve been \
coming here for years and you just started working here last month." << endl;
}

void	Karen::error(void){
	cout << "ERROR" << endl;
	cout << "This is unacceptable, I want to speak to the manager now." << endl;
}