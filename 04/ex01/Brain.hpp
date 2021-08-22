#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain{

private:
		string _brain[100];

public:
		Brain();
		Brain(const Brain &copy);
		~Brain();

		Brain &operator=(const Brain& op);

		void setBrain(string* brain);
		string * getBrain();
};

#endif