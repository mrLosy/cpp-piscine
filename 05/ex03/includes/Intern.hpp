#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:	
		Intern();
		Intern(const Intern& copy);
		virtual ~Intern();

		Intern &operator=(const Intern& op);

		class NoReplace : public std::exception{
			const char * what() const throw();
		};

		Form * makeForm(string nameForm, string target);
		Form * makePresidentialPardon(string target);
		Form * makeRobotomyRequest(string target);
		Form * makeShrubberyCreation(string target);
};

#endif