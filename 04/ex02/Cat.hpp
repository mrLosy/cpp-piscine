#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

private:
		string _type;
		Brain *_brain;

public:
		Cat();
		Cat(string type);
		Cat(const Cat &copy);
		~Cat();

		Cat &operator=(const Cat& op);

		void makeSound() const;
};

#endif