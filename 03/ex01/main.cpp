#include "ScavTrap.hpp"

int main(void){
	ClapTrap valli("Valli");

	valli.takeDamage(9);
	valli.beRepaired(9);

	ScavTrap eva("Eva");

	eva.takeDamage(9);
	eva.attack("pushka");
	eva.guardGate();

	return (0);
}