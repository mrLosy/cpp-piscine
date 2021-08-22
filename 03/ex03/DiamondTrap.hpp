#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{

private:
		string	m_name;
		int		m_hitPoints;
		int		m_energyPoints;
		int		m_attackDamage;

public:
		DiamondTrap(string name);
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap& op);

		void	attack(string const & target);
		void	whoAmI(void);
};

#endif