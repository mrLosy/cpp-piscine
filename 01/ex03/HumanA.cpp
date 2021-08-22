#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : m_weapon(weapon), m_name(name){
	m_weapon = weapon;
	m_name = name;
}

HumanA::~HumanA(){
	cout << m_name << " committed suicide and kissed you on the forehead." << endl;
}

void	HumanA::Attack(){
	cout << m_name << " attacks with a " << m_weapon.GetType() << endl;
}