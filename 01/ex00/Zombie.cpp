#include "Zombie.hpp"

Zombie::Zombie(string name){
	m_name = name;
	return ;
}

Zombie::~Zombie(void){
	cout << "The zombie " << m_name << " died!" << endl;	
	return ; 
}

void	Zombie::announce(void) {
	cout << m_name << " Braiiiiiiinnnssss..." << endl;
}

Zombie*	Zombie::newZombie(string name){
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void	Zombie::randomChump(std::string name){
	Zombie *zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}