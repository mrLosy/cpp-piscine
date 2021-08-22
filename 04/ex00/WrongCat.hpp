#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

private:
		string _type;

public:
		WrongCat();
		WrongCat(string type);
		~WrongCat();

		void makeSound() const;
};

#endif