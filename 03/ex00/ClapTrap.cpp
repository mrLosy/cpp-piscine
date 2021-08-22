#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name){
	cout << "Default constructor called" << endl;
	m_name = name;
	m_hitPoints = 10;
	m_energyPoints = 10;
	m_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	cout << "Copy constructor called" << endl;
	this->m_name = copy.m_name;
	this->m_hitPoints = copy.m_hitPoints;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_attackDamage = copy.m_attackDamage;
}

ClapTrap::~ClapTrap(void){
	cout << "Destructor called" << endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& op){
	this->m_name = op.m_name;
	this->m_hitPoints = op.m_hitPoints;
	this->m_energyPoints = op.m_energyPoints;
	this->m_attackDamage = op.m_attackDamage;
	return (*this);
}

void	ClapTrap::attack(string const & target){
	cout << "ClapTrap " << m_name << " attack " << target <<\
	", causing " << m_attackDamage << " points of damage" << endl; 
}

void	ClapTrap::takeDamage(unsigned int amount){
	cout << "The ClapTrap " << m_name << " takes " << amount <<\
	" damage" << endl; 
}

void	ClapTrap::beRepaired(unsigned int amount){
	cout << "The ClapTrap " << m_name << " be repaired " << amount << endl; 
}