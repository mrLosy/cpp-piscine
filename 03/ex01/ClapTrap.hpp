#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;

class ClapTrap{

protected:
		string	m_name;
		int		m_hitPoints;
		int		m_energyPoints;
		int		m_attackDamage;

public:
		ClapTrap(string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap& op);

		void attack(string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif