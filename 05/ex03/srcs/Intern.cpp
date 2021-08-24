#include "../includes/Intern.hpp"

Intern::Intern(void){
	cout << "Intern constructor called" << endl;
}

Intern::Intern(const Intern& copy){
	*this = copy;
}

Intern::~Intern(void){
	cout << "Intern destructor called" << endl;
}

Intern &Intern::operator=(const Intern& op){
	if (this == &op)
		return *this;
	return (*this);
}

const char * Intern::NoReplace::what() const throw(){
	return "The form is unknown!";
}

Form * Intern::makeForm(string nameForm, string target){
	string nameArray[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	Form* (Intern::*formArray[3])(string target);
	formArray[0] = &Intern::makePresidentialPardon;
	formArray[1] = &Intern::makeRobotomyRequest;
	formArray[2] = &Intern::makeShrubberyCreation;

	for (int i = 0; i < 3; i++)
		while (nameArray[i].compare(nameForm) == 0)
			return (this->*(formArray[i]))(target);
		
	throw Intern::NoReplace();
}

Form * Intern::makePresidentialPardon(string target){
	return new PresidentialPardonForm(target);
}

Form * Intern::makeRobotomyRequest(string target){
	return new RobotomyRequestForm(target);
}

Form * Intern::makeShrubberyCreation(string target){
	return new ShrubberyCreationForm(target);
}