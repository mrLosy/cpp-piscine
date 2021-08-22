#include "Fixed.hpp"

Fixed::Fixed(void){
	cout << "Default constructor called" << endl;
	m_value = 0;
}

Fixed::Fixed(const Fixed &copy){
	cout << "Copy constructor called" << endl;
	m_value = copy.getRawBits();
}

Fixed::~Fixed(void){
	cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const{
	cout << "getRawBits member function called" << endl;
	return (m_value);
}

void Fixed::setRawBits(int const raw){
	cout << "setRawBits member function called" << endl;
	m_value = raw;
}

Fixed & Fixed::operator=(const Fixed& ovr){
	cout << "Assignation operator called" << endl;
	if (this != &ovr)
		m_value = ovr.getRawBits();
	return (*this);
}
