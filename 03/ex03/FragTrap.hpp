#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{

private:
		int		m_hitPoints;
		int		m_energyPoints;
		int		m_attackDamage;

public:
		FragTrap(string name);
		FragTrap(const FragTrap &copy);
		~FragTrap();

		FragTrap &operator=(const FragTrap& op);

		void	attack(string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFivesGuys(void);
		int		getHitPoints(void);
		int		getAttackDamage(void);
};

#endif