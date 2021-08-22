#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter{

protected:
		string _name;
		AMateria *_materia[4];

public:
		Character();
		Character(string const name);
		Character(const Character& copy);
		~Character();

		Character &operator=(const Character& op);

		string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif