#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string.h>

using std::string;
using std::endl;
using std::cout;

class Weapon{

private:	
		string m_type;

public:
		Weapon();
		Weapon(string type);
		~Weapon();

		void			SetType(string type);
		const string	GetType(void);
};

#endif