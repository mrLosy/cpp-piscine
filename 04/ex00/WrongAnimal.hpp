#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "string"
#include "iostream"

using std::cout;
using std::endl;
using std::string;

class WrongAnimal{

protected:
		string _type;

public:
		WrongAnimal();
		WrongAnimal(string type);
		virtual ~WrongAnimal();

		string getType() const;
		void makeSound() const;
};

#endif