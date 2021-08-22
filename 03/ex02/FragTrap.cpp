#include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name){
	cout << "FragTrap Default constructor called" << endl;
	m_hitPoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy.m_name){
	cout << "FragTrap Copy constructor called" << endl;
	this->m_name = copy.m_name;
	this->m_hitPoints = copy.m_hitPoints;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_attackDamage = copy.m_attackDamage;
}

FragTrap::~FragTrap(void){
	cout << "FragTrap Destructor called" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap& op){
	this->m_name = op.m_name;
	this->m_hitPoints = op.m_hitPoints;
	this->m_energyPoints = op.m_energyPoints;
	this->m_attackDamage = op.m_attackDamage;
	return (*this);
}

void	FragTrap::attack(string const & target){
	cout << "FragTrap " << m_name << " attack " << target <<\
	", causing " << m_attackDamage << " points of damage" << endl; 
}

void	FragTrap::takeDamage(unsigned int amount){
	cout << "The FragTrap " << m_name << " takes " << amount <<\
	" damage" << endl; 
}

void	FragTrap::highFivesGuys(void){
	cout << "FragTrap " << m_name << " give five guys" << endl;
}