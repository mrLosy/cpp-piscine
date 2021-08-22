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

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif