#include "Zombie.hpp"

int main(void){
	Zombie zombie("Madara");
	zombie.announce();
	Zombie *zombie1 = NULL;
	zombie1->randomChump("Itachi");
	return (0);
}
