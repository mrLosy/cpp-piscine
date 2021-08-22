#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string.h>

using std::string;
using std::endl;
using std::cout;

class Karen{
	
private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

public:

		void complain(string level);
};

#endif