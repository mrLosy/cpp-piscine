#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: public ClapTrap{

private:
		int		m_hitPoints;
		int		m_energyPoints;
		int		m_attackDamage;

public:
		ScavTrap(string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap& op);

		void attack(string const & target);
		void takeDamage(unsigned int amount);
		void guardGate();
};

#endif