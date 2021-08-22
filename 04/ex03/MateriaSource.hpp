#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource{

protected:
		AMateria* _materia[4];

public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource& op);

		void learnMateria(AMateria* m);
		AMateria* createMateria(string const & type);
};

#endif