#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void){
	ClapTrap valli("Valli");

	valli.takeDamage(9);
	valli.beRepaired(9);

	ScavTrap eva("Eva");

	eva.takeDamage(9);
	eva.attack("pushka");
	eva.guardGate();

	FragTrap molly("molly");

	molly.attack("stvol");
	molly.takeDamage(10);
	molly.highFivesGuys();

	return (0);
}