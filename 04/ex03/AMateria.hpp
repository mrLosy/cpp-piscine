#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"


using std::string;
using std::cout;
using std::endl;

class ICharacter;

class AMateria{

protected:
		string _type;

public:
		AMateria();
		AMateria(string const & type);
		AMateria(const AMateria& copy);
		virtual ~AMateria();

		AMateria &operator=(const AMateria& op);

		string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif