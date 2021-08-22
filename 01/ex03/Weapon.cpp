#include "Weapon.hpp"

Weapon::Weapon(){
	return ;
}

Weapon::Weapon(string type){
	m_type = type;
}

Weapon::~Weapon(){
	return ;
}

void	Weapon::SetType(string type){
	m_type = type;
}
const string	Weapon::GetType(void){
	return (m_type);
}