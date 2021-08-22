#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

class Cure : public AMateria {

public:
		Cure();
		Cure(const Cure& copy);
		~Cure();

		Cure &operator=(const Cure& op);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif