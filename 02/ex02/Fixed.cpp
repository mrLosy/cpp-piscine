#include "Fixed.hpp"

Fixed::Fixed(void){
	// cout << "Default constructor called" << endl;
	m_value = 0;
}

Fixed::Fixed(const Fixed &copy){
	// cout << "Copy constructor called" << endl;
	m_value = copy.getRawBits();
}

Fixed::Fixed(int const integer){
	// cout << "Int constructor called" << endl;
	m_value = integer << fractBit;
}

Fixed::Fixed(float const flt){
	// cout << "Float constructor called" << endl;
	m_value = (int)(roundf(flt * (1 << fractBit)));
}

Fixed::~Fixed(void){
	// cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const{
	// cout << "getRawBits member function called" << endl;
	return (m_value);
}

void Fixed::setRawBits(int const raw){
	// cout << "setRawBits member function called" << endl;
	m_value = raw;
}

float Fixed::toFloat(void) const{
	return ((float) m_value / (float)(1 << fractBit));
}

int Fixed::toInt(void) const{
	return ((int) m_value >> fractBit);
}

Fixed & Fixed::operator=(const Fixed& ovr){
	// cout << "Assignation operator called" << endl;
	if (this != &ovr)
		m_value = ovr.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe){
	out << fixe.toFloat();
	return (out);
}

bool Fixed::operator>(Fixed const &op) const{
	return (this->getRawBits() > op.getRawBits());
}

bool Fixed::operator<(Fixed const &op) const{
	return (this->getRawBits() < op.getRawBits());
}

bool Fixed::operator>=(Fixed const &op) const{
	return (this->getRawBits() >= op.getRawBits());
}

bool Fixed::operator<=(Fixed const &op) const{
	return (this->getRawBits() <= op.getRawBits());
}

bool Fixed::operator==(Fixed const &op) const{
	return (this->getRawBits() == op.getRawBits());
}

bool Fixed::operator!=(Fixed const &op) const{
	return (this->getRawBits() != op.getRawBits());
}

Fixed Fixed::operator+(Fixed const &op){
	Fixed other;

	other.setRawBits(this->getRawBits() + op.getRawBits());
	return (other);
}

Fixed Fixed::operator-(Fixed const &op){
	Fixed other;

	other.setRawBits(this->getRawBits() - op.getRawBits());
	return (other);
}

Fixed Fixed::operator*(Fixed const &op){
	Fixed other(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)op.getRawBits());
	other.setRawBits((tmp1 * tmp2) / (1 << this->fractBit));
	return (other);
}

Fixed Fixed::operator/(Fixed const &op){
	Fixed other(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)op.getRawBits());
	other.setRawBits((tmp1 / (1 << this->fractBit)) / tmp2);
	return (other);
}


Fixed Fixed::operator++(int){
	Fixed op(*this);
	operator++();
	return (op);
}

Fixed Fixed::operator++(){
	this->m_value++;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed op(*this);
	operator--();
	return (op);
}

Fixed Fixed::operator--(){
	this->m_value--;
	return (*this);
}

Fixed const &Fixed::min(Fixed const &op, Fixed const &oth){
	if (op < oth)
		return (op);
	return (oth);
}

Fixed const &Fixed::max(Fixed const &op, Fixed const &oth){
	if (op < oth)
		return (oth);
	return (op);
}

Fixed &Fixed::min(Fixed &op, Fixed &oth){
	if (op < oth)
		return (op);
	return (oth);
}

Fixed &Fixed::max(Fixed &op, Fixed &oth){
	if (op < oth)
		return (oth);
	return (op);
}

Fixed const &min(Fixed const &op, Fixed const &oth){
	return (Fixed::min(op, oth));
}

Fixed const &max(Fixed const &op, Fixed const &oth){
	return (Fixed::max(op, oth));
}

Fixed &min(Fixed &op, Fixed &oth){
	return (Fixed::min(op, oth));
}

Fixed &max(Fixed &op, Fixed &oth){
	return (Fixed::max(op, oth));
}
