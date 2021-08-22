#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::endl;
using std::cout;

class Fixed{
	
private:
		int	m_value;
		static const int fractBit = 8;	

public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int integer);
		Fixed(const float flt);
		~Fixed();

		Fixed &operator=(const Fixed& op);

		bool operator>(Fixed const &op) const;
		bool operator<(Fixed const &op) const;
		bool operator>=(Fixed const &op) const;
		bool operator<=(Fixed const &op) const;
		bool operator==(Fixed const &op) const;
		bool operator!=(Fixed const &op) const;

		Fixed operator+(Fixed const &op);
		Fixed operator-(Fixed const &op);
		Fixed operator*(Fixed const &op);
		Fixed operator/(Fixed const &op);

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		static Fixed const &min(Fixed const &op, Fixed const &oth);
		static Fixed const &max(Fixed const &op, Fixed const &oth);
		static Fixed &min(Fixed &op, Fixed &oth);
		static Fixed &max(Fixed &op, Fixed &oth);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

Fixed const &min(Fixed const &op, Fixed const &oth);
Fixed const &max(Fixed const &op, Fixed const &oth);
Fixed &min(Fixed &op, Fixed &oth);
Fixed &max(Fixed &op, Fixed &oth);

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif