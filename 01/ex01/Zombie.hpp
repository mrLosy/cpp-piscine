#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string.h>

using std::string;
using std::endl;
using std::cout;

class Zombie {

public:
		Zombie();
		Zombie(string name);
		~Zombie(void);

		void	announce(void);
		Zombie*	newZombie(string name);
		void	randomChump(std::string name);
		void	SetName(string name);
private:
		string m_name;
};
		Zombie* zombieHorde(int N, string name);
#endif