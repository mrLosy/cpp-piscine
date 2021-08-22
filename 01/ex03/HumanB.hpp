#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(string name);
	~HumanB();

	void Attack();
	void SetWeapon(Weapon &weapon);

private:
	Weapon *m_weapon;
	string m_name;
};

#endif