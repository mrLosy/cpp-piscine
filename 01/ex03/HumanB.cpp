#include "HumanB.hpp"

HumanB::HumanB(string name){
	m_name = name;
}

HumanB::~HumanB(){
	cout << m_name << " committed suicide and kissed you on the forehead." << endl;
}

void HumanB::SetWeapon(Weapon &weapon) {
    m_weapon = &weapon;
}

void	HumanB::Attack(){
	cout << m_name << " attacks with a " << m_weapon->GetType() << endl;
}