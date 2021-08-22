#include "Fixed.hpp"

Fixed::Fixed(void){
	cout << "Default constructor called" << endl;
	m_value = 0;
}

Fixed::Fixed(const Fixed &copy){
	cout << "Copy constructor called" << endl;
	m_value = copy.getRawBits();
}

Fixed::Fixed(const int integer){
	cout << "Int constructor called" << endl;
	m_value = integer << fractBit;
}

Fixed::Fixed(const float flt){
	cout << "Float constructor called" << endl;
	m_value = (int)(roundf(flt * (1 << fractBit)));
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

float Fixed::toFloat(void) const{
	return ((float) m_value / (float)(1 << fractBit));
}

int Fixed::toInt(void) const{
	return ((int) m_value >> fractBit);
}

Fixed & Fixed::operator=(const Fixed& ovr){
	cout << "Assignation operator called" << endl;
	if (this != &ovr)
		m_value = ovr.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe){
	out << fixe.toFloat();
	return (out);
}
