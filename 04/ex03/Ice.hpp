#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

class Ice : public AMateria {

public:
		Ice();
		Ice(const Ice& copy);
		~Ice();

		Ice &operator=(const Ice& op);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif