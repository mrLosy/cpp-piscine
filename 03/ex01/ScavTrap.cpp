#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(name){
	cout << "ScavTrap Default constructor called" << endl;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy.m_name){
	cout << "ScavTrap Copy constructor called" << endl;
	this->m_name = copy.m_name;
	this->m_hitPoints = copy.m_hitPoints;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_attackDamage = copy.m_attackDamage;
}

ScavTrap::~ScavTrap(void){
	cout << "ScavTrap Destructor called" << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& op){
	this->m_name = op.m_name;
	this->m_hitPoints = op.m_hitPoints;
	this->m_energyPoints = op.m_energyPoints;
	this->m_attackDamage = op.m_attackDamage;
	return (*this);
}

void	ScavTrap::attack(string const & target){
	cout << "ScavTrap " << m_name << " attack " << target <<\
	", causing " << m_attackDamage << " points of damage" << endl; 
}

void	ScavTrap::takeDamage(unsigned int amount){
	cout << "The ScavTrap " << m_name << " takes " << amount <<\
	" damage" << endl; 
}

void	ScavTrap::guardGate(void){
	cout << "ScavTrap " << m_name << " have enterred in Gate keeper mode" << endl;
}