#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), ScavTrap(name), FragTrap(name){
	cout << "DiamondTrap Default constructor called" << endl;
	m_name = name + "_clap_trap";
	m_hitPoints = FragTrap(name).getHitPoints();
	m_energyPoints = ScavTrap(name).getEnergyPoints();
	m_attackDamage = FragTrap(name).getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy.m_name), ScavTrap(copy.m_name), FragTrap(copy.m_name){
	cout << "DiamondTrap Copy constructor called" << endl;
	this->m_name = copy.m_name;
	this->m_hitPoints = copy.m_hitPoints;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_attackDamage = copy.m_attackDamage;
}

DiamondTrap::~DiamondTrap(void){
	cout << "DiamondTrap Destructor called" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& op){
	this->m_name = op.m_name;
	this->m_hitPoints = op.m_hitPoints;
	this->m_energyPoints = op.m_energyPoints;
	this->m_attackDamage = op.m_attackDamage;
	return (*this);
}

void	DiamondTrap::attack(string const & target){
	ScavTrap(this->getName()).attack(target);
}

void	DiamondTrap::whoAmI(void){
	cout << "DiamondTrap name = " << m_name << endl;
	cout << "ClapTrap name = " << ClapTrap::m_name << endl;
}
