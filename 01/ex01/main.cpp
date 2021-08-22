#include "Zombie.hpp"

int main(void){
	Zombie *zombies;
	zombies = zombieHorde(5, "Naruto");
	zombies->announce();
	delete [] zombies;
	return (0);
}
