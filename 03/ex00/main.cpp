#include "ClapTrap.hpp"

int main(void){
	ClapTrap valli("Valli");

	ClapTrap eva(valli);

	valli.attack("Pushka");
	eva.takeDamage(9);
	eva.beRepaired(9);
	return (0);
}