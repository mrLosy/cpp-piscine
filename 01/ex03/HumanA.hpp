#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(string name, Weapon &weapon);
	~HumanA();

	void Attack();
	
private:
	Weapon &m_weapon;
	string m_name;
};

#endif